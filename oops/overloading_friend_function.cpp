#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
    void get(){
        cin>>a;
    }
    friend A operator+(A & x,A & y){
        A c;
        c.a=x.a+y.a;
        return c;
    }
    void print(int c){
        cout<<a;
        int b=c+this->a;
        cout<<b;
    }
};

int main(){
    A a,b,c;
    a.get();
    b.get();
    c=a+b;
    c.print(5);
    return 0;
}

//this is a keyword which just a pointer to the object which is calling the function 