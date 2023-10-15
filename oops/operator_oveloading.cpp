#include<bits/stdc++.h>
using namespace std;

class A{
    int x;
    public:
    void get(){
    x=2;
    }
    A operator+(A b){
        A c;
        c.x=x+b.x;
        return c;
    }
 void print(){
cout<<x;
 }
};

int main(){
    A a,b,c;
    a.get();
    b.get();
    c=a+b;
   c.print();
    return 0;
}