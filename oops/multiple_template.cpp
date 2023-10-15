//CLASS TEMPlATE with MUltiple parameters(one ,teo or more than two)
//for default parameters means if no parameter is specified then this value are used 
//template<class t1=int,class t2=float>
#include<bits/stdc++.h>
using namespace std;

template<class T1=float,class T2=int>

class demo{
    T1 a;
    T2 b;
    public:
    demo(T1 x,T2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<" "<<b;
    }
    
};

int main(){
    demo<int ,char>v(6,'a');
    v.display();
    return 0;
}