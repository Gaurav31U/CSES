#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
long dp[1000001][2];
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  memset(dp,0,sizeof(dp));
  cin>>n;
  dp[1][0]=1;
  dp[1][1]=1;
  for(int i = 2; i <= 1e6; i++){
    dp[i][0]=(4ll*dp[i-1][0]+dp[i-1][1]+MOD)%MOD;
    dp[i][1]=(2ll*dp[i-1][1]+dp[i-1][0]+MOD)%MOD;
  }
  while(n--){
    int k;cin>>k;
    cout<<((dp[k][0]+dp[k][1]+MOD)%MOD)<<"\n";
  }
  return 0;
}