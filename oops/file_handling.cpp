// Online C++ compiler to run C++ program online


//fstream has both the member function of ofstream and ifstream
//iostream hae both the memeber function of istream and ostream 
#include <iostream>
#include<fstream>
using namespace std;

int main() {
// int a,b,c;   
// ifstream fout;
// fout.open("abc.txt");
// fout>>a>>b>>c;
// cout<<a<<" "<<b<<" "<<c;
fstream apend;
string s="priya is a good girl";
apend.open("abc.txt ",ios::app | ios::in |ios::out ); // using for all operation read,write,append
apend<<s;
fstream p;
p.open("abc.txt");
string u;
//p>>u ->only a single word;
getline(p,u);
cout<<u;
    return 0;
}