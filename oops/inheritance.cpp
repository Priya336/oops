#include<bits/stdc++.h>
using namespace std;

class A{
//    private:// cannot aaccessable from child class
public:
    int a;
    int b;
    public:
   void get(){
        cout<<"Enter two Numbers";
        cin>>a>>b;
    }
};
class B:public A{
    protected:
    int z;
    public :
    int sum(){
    z=a+b;
    return z;
    }
};
class C: protected B{
public:
void print(){
    cin>>z;
     cout<<z;
}
};
int main(){
    A a;
    B b;
    C c;
    b.get();
    // b.z=4;//envalid protected member cannot be accessed  by the object of class
   int z= b.sum();
   cout<<z;
  c.print();
    return 0;
}