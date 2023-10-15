#include<bits/stdc++.h>
using namespace std;

class A{
    protected :
    int v;
    public:
    A(int x){
        v=x;
        cout<<" A"<<endl;
    }
     void display(){
        cout<<v<<endl;
    }
};
class B{
    protected:
    int m;
    public:
   B(int y){
    m=y;
     cout<<" B"<<endl;
    }
    void display(){
        cout<<m<<endl;
    }
};
class C:public B,public A{
    int p;
    public:
    C(int x,int y,int z):A(x),B(y){
        p=z;
         cout<<" C"<<endl;
    }
      void display(){
        cout<<p<<endl;
    }
};
int main(){
C cc(1,2,3);
cc.display();
cc.A::display();
cc.B::display();
return 0;
}