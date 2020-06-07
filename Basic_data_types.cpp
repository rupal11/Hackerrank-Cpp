#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the c
    int a;
    long b;
    char c;
    float f;
    double d;

    cin>>a>>b>>c>>f>>d;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout.precision(3);
    cout<<fixed<<f<<"\n";
    cout.precision(9);
    cout<<fixed<<d<<"\n";
    return 0;
}
