#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
int dp[1000001];
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  memset(dp,0,sizeof(dp));
  cin>>n;
  dp[1] = 2;
  dp[2] = 8;
  for(int i = 3; i <= 1e6; i++)
    dp[i] = ((6*dp[i-1] - 7*dp[i-2]) % MOD + MOD) % MOD;
  while(n--){
    int k;cin>>k;
    cout<<dp[k]<<"\n";
  }
  return 0;
}