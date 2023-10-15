#include<bits/stdc++.h>
using namespace std;

class num{
    int n;
    public:
    void getdata();
    void reverse();
};
void num::getdata(){
    cin>>n;
}
void num::reverse(){
    int c=n;
    while(1){
        int a=c%10;
        if(c==0){
       break;
        }
        cout<<a;
        c=c/10;
        
    }
}
int main(){
 num n1;
 n1.getdata();
 n1.reverse();
 return 0;
}