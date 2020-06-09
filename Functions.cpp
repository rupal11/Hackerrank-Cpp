#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a,int b,int c,int d)
{
    int larger=0;
    if(a>b)
     {
      if(a>c)
       larger=a;
      else
        larger=c;
     }
     else
     {
         if(b>c)
         larger=b;
        else
         larger=c;
     }
     if(d>larger)
      larger=d;
      return larger; 
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


