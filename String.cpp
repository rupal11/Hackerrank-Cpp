#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    char s;
  string a ,b,c;
  cin>>a;
   cin>>b;
  cout<<a.size()<<" " <<b.size()<<"\n";
  cout<<a+b<<"\n";
  s=a[0];
  a[0]=b[0];
  b[0]=s;
  cout<<a<<" " <<b;


    return 0;
}

