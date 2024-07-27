#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    cout<<(((a+b)%3 != 0 || a > 2*b || b > 2*a) ? "NO\n" : "YES\n");
  }
  return 0;
}