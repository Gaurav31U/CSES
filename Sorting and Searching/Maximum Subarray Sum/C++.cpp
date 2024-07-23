#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  long long ans=INT_MIN;
  long long s=0;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    s+=a;
    ans=max(ans,s);
    if(s<0)s=0;
  }
  cout<<ans;
  return 0;
}