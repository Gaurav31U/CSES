#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  long long ans=0;
  int n;cin>>n;
  int val;cin>>val;
  for(int i=1;i<n;i++){
    int a;cin>>a;
    if(val>a)ans+=(val-a);
    else val=a;
  }
  cout<<ans;
  return 0;
}