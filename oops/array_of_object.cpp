#include<bits/stdc++.h>
using namespace std;

class num{
    int n;
    public:
    void getdata();
    void reverse();
};
void num::getdata(){
    cin>>n;
}
void num::reverse(){
    int c=n;
    while(1){
        int a=c%10;
        if(c==0){
       break;
        }
        cout<<a;
        c=c/10;
        
    }
}
int main(){
 num n1[5];//  5  objects of the same class 
 for(int i=0;i<5;i++){
 n1[i].getdata();
 n1[i].reverse();
 }
 return 0;
}

//  * the object ofarry means the object in which array is present different from array of object