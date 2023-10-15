#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void display(){
   cout<<"Base Class"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"Child Class"<<endl;
        
    }
};

int main(){
A bb;
A*ptr;
ptr=&bb;
ptr->display();
return 0;
}