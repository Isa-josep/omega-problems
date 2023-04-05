#include<bits/stdc++.h>
#ifdef  LOCAL 
#include "debug.h"  
#else 
#define  debug(...)
#endif
using namespace std;
#define endl '\n'
#define ll long long 
#define ull  unsigned long long 
#define pb push_back
#define fore(i,a,z) for(int i=a;i<z;i++)
#define len(n) n.size()
int arr[1005+5][1005+5];
ll prefix[1005+5][1005+5];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int a,b;
  cin>>a>>b;
  for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
      cin>>arr[i][j];
      prefix[i][j]=arr[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
    }
  }
  int q;
  cin>>q;
  while(q--){
    int f1,f2,c1,c2;
    cin>>f1>>c1>>f2>>c2;
    cout<<prefix[f2][c2]-prefix[f2][c1-1]-prefix[f1-1][c2]+prefix[f1-1][c1-1]<<endl;
  }
  return 0;
}