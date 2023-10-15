#include<bits/stdc++.h>
using namespace std;

class demo{
    int a;
    int b;

    public:
    void get(){
        cin>>a>>b;
    }
    void put(){
        cout<<a<<" "<<b;
    }
    bool operator==(demo bb){
        if(bb.a=a && bb.b==b){
            return true;
        }
        else{
            return false;
        }
    }
};
    int main(){
        demo aa,bb;
        aa.get();
        bb.get();
        if (aa==bb){
            cout<<"same"<<endl;
        }
        else{
            cout<<"different"<<endl;
        }
        return 0;
    }

