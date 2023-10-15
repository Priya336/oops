#include<bits/stdc++.h>
using namespace std;

class abc{
    int a;
    public:
    abc();
    void get();
};
abc::abc(){
    a=10;
}
void abc::get(){
   cout<<a;
}

int main(){
abc a1;
a1.get();
return 0;

}