#include<bits/stdc++.h>
using namespace std;
template<class T>
class v {
    public:
    T *arr;
    T size;
    void get(int m){
        size=m;
     arr=new T[m];
    }
   T dotproduct(v &v3){
     T d=0;
     for(int i=1;i<=size;i++){
        d+=arr[i]*this->arr[i];
     }
     return d;
    }
};

int main(){
   v<float> v1,v2;
    v1.get(3);
    v1.arr[1]=1;
    v1.arr[2]=2.4;
    v1.arr[3]=3;
    v2.get(3);
    v2.arr[1]=1;
    v2.arr[2]=2;
    v2.arr[3]=3;
    float d=v1.dotproduct(v2);
    cout<<d;
    return 0;
}

//templates are very usful when you have to perform same operation in different data types 
//template can be ud=sed to create multiply data type function /class
//Multiple templates parameter can be passed so that more than one data type can be spaecified
