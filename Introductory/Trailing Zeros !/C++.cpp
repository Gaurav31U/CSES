#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  int ans=0;
  while(n>0){
    ans=ans+(n/5);
    n/=5;
  }
  cout<<ans;
  return 0;
}