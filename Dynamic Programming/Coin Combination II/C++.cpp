#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int dp[1000001];
int main(){
  int n,x;cin>>n>>x;
  vector<int> arr(n);
  int md=1e9+7;
  for(int i=0;i<n;i++)cin>>arr[i];
  dp[0]=1;
  for(auto it:arr){
    for(int i=0;i<=x;i++){
      if(i>=it)(dp[i]+=dp[i-it])%=md;
    }
  }
  cout<<dp[x];
  return 0;
}