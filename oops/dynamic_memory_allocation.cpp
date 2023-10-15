#include<bits/stdc++.h>
using namespace std;

class A{
    int **p;
    int m;
    int n;
    public:
    void matrix(int a,int b){
        m=a;
        n=b;
    p=new int *[m];
    for(int i=0;i<m;i++){
     p[i]=new int[n];
    }
    }
void getvalue(int i,int j,int value){
   p[i][j]=value;
}
void putvalue(int i,int j){
    cout<<p[i][j]<<" ";
}
};

int main(){
     A a1;
    int a;
    int b;
    cin>>a>>b;
    a1.matrix(a,b); 
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int k;
            cin>>k;
 a1.getvalue(i,j,k);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
a1.putvalue(i,j);
        }
    }
    
    return 0;
}