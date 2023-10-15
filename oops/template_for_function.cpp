#include<bits/stdc++.h>
using namespace std;

template<class T>
void bubblesort(vector<T> &arr,int N){
for(int i=0;i<N;i++){
for(int j=1;j<N-i;j++){
if(arr[j-1]>arr[j]){
    int a=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]=a;
}
}
}
}
int main(){
    int N;
    cin>>N;
    vector<int >v(N);
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    bubblesort<int>(v,N);
    for(int i=0;i<N;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}