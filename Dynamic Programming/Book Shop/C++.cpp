#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int md=1e9+7;
int dp[1001][100001];
int main(){
  int n,x;cin>>n>>x;
  vector<int> price(n),page(n);
  for(int i=0;i<n;i++)cin>>price[i];
  for(int i=0;i<n;i++)cin>>page[i];
  for(int i=1;i<=n;i++){
    for(int j=0;j<=x;j++){
      if(price[i-1]<=j){
        dp[i][j]=max(dp[i-1][j],dp[i-1][j-price[i-1]]+page[i-1]);
      }else dp[i][j]=dp[i-1][j];
    }
  }
  cout<<dp[n][x];
  return 0;
}