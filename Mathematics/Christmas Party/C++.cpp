#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;

int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  vector<int> dp(n+4,0);
  dp[2]=1;
  for(int i=3;i<=n;i++){
    dp[i]=(i-1)*(dp[i-1]+dp[i-2])%MOD;
  }
  cout<<dp[n];
  return 0;
}