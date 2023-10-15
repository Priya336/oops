#include<bits/stdc++.h>
using namespace std;
int size=5;
template<class T>
class Stack{
    public:
    Stack();
    T pop();
    void push();
    bool is_empty();
    bool is_full();
    private:
    int top;
    T arr[5];
};
template<class T> Stack<T>::Stack(){
    top=-1;
}

template<class T> T Stack<T>::pop(){
  
        T a=arr[top];
        top=top-1;
         return a;
    
}

template<class T> void Stack<T>::push(){
    if(top!=(size-1)){
   T a;
    cin>>a;
    top=top+1;
    arr[top]=a; 
    }
    else{
        cout<<"OVERFLOW"<<endl;
    }
}
template<class T> bool Stack<T>::is_empty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
template<class T> bool Stack<T>::is_full(){
    if(top==(size-1)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
 Stack<string>s;
 if(s.is_empty()){
 cout<<"STACK IS EMPTY"<<endl;
 };
  s.push();
  s.push();
  s.push();
  s.push();
  s.push();
  s.push();
   s.push();
  if(s.is_full()){
    cout<<"STACK IS FULL"<<endl;
  }
  string a=s.pop();
  cout<<a<<endl;
  return 0;
}