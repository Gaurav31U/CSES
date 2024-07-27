#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    long long ans=0;
    ans=1ll+(i-1)*(i-2)/2;
    ans=ans*(i-1)*(i+4);
    cout<<ans<<"\n";
  }
  return 0;
}