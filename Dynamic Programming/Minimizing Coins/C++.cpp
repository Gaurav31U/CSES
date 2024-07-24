#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int dp[1000001];
int main(){
  int n,x;cin>>n>>x;
  vector<int> arr(n);
  for(int i=0;i<=x;i++)dp[i]=1e7;
  for(int i=0;i<n;i++)cin>>arr[i];
  dp[0]=0;
  for(int i=0;i<=x;i++){
    for(auto it:arr){
      if(i>=it)dp[i]=min(dp[i],dp[i-it]+1);
    }
  }
  if(dp[x]==1e7){
    cout<<-1;
    return 0;
  }
  cout<<dp[x];
  return 0;
}