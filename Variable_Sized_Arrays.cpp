#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x,y,k,n,q,m;
    cin>>n>>q;
    vector<int> A[n];
    int i,j;
  for(x=0;x<n;++x)
  { 
    cin>>k;
   for(y=0;y<k;++y)
   {
      cin>>m;
      A[x].push_back(m);
   }
  }
 for(x=0;x<q;++x)
   {
    cin>>i>>j;
    cout<<A[i][j]<<endl;
   }
    return 0;
}

