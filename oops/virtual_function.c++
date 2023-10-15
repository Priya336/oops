#include <bits/stdc++.h>
using namespace std;


 class phone{
    public :
     phone(){
        cout<<("I am a constructor of phone\n");
    }
    virtual void on(){
       cout<<("Phone is on\n");
    }
     void music(){
        cout<<("Phone music is on\n");
    }

 };
 class Smartphone:public phone{
 public :
    Smartphone(){
        cout<<("I am a constructor of smartphone\n");
    }
     void music(){
        cout<<("SmartphonePhone music is on\n");
    }

     void on(){
        cout<<("Smartphone is on\n");
    }
 };

 int main(){
    phone*ptr;
   Smartphone obj;
    ptr=&obj;
    ptr->music();
    ptr->on();
    return 0;
 }