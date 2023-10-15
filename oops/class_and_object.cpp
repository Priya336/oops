#include <bits/stdc++.h>
using namespace std;

class person
{

public:
    static int num;
    int age;
    void changename()
    {
        string a;
        cin >> a;
        name = a;
    }

private:
    string name = "ritu";
};
int person::num;//declation of static variable 

int main()
{
    
    person p1;
    p1.age = 8;
    p1.changename(); // access the private variable through the method in the class
    person::num=5;//access the satic variable 
    int a= person::num;
    cout<<a;
  return 0;
}