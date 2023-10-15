#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void display(){
   cout<<"Base Class"<<endl;
    }
};
class B:public A{/
    public:
    void display(){
        cout<<"Child Class"<<endl;
        A::display();
    }
};
int main(){
B bb;
bb.display();
bb.A::display();
return 0;
}