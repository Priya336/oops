#include<bits/stdc++.h>
using namespace std;

// class student{
//     private:
//     string sub;
//     int a;
//     int b;
//     int c;
   
//     public:
//      static string school;
//     int get_avr(){
//         cin>>sub;
//         cin>>a;
//         cin>>b;
//         cin>>c;
//         return (a+b+c)/3;
//     }
// };
// string student::school;

// int main(){
//    student s1;
//   int ans= s1.get_avr();
//   student::school="Evergreen sr.sec school";
//    cout<<student::school<<"  "<<ans;
//   return 0;
// }
string s="priya";
class student{
    public:
    string sub;
    int a;
    int b;
    int c;
     static string school;
    int get_avr();
    static void print();
};
string student::school;
  int student::get_avr(){
    {
        cin>>sub;
        cin>>a;
        cin>>b;
        cin>>c;
        cout<<student::school;
        return (a+b+c)/3;
    }
  }

  void student::print(){
    cout<<s<<"  "<<student::school<<endl;
  }
int main(){
  

   student s1;
  student::school="Evergreen sr.sec school";
   int ans=s1.get_avr();
  student::print();
   cout<<"  "<<ans;
  return 0;
}