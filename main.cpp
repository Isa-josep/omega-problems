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
int main(){
cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Tamaño de la Matriz: "<<a<<" x "<<b<<endl;
     for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(arr[i][j]%2==0 ){
                cout<<"*"<<arr[i][j]<<" ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}