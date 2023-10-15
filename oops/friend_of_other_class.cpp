#include<bits/stdc++.h>
using namespace std;

class A;
class B{
    int a;
    public:
    void get(){
        cin>>a;
    }
    void  put(A &b1);
};
class A{
    int b;
    public:
    void get(){
        cin>>b;

    }
    friend void B::put(A &a1);
};
void B::put(A &b1){
   int c=a+b1.b;
    cout<<c;






    
}
int main(){
    A a1;
    B b1;
    a1.get();
    b1.get();
    b1.put(a1);
    return 0;
}