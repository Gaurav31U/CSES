#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
vector<int> val;
int dp[501][100001];
int get(int i,int target){
  if(target==0)return 1;
  if(target<0)return 0;
  if(i>n)return 0;
  if(dp[i][target]!=-1)return dp[i][target];
  int ans=0;
  ans+=get(i+1,target-i);
  ans+=get(i+1,target);
  return dp[i][target]=ans%MOD;
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  memset(dp,-1,sizeof(dp));
  cin>>n;
  int s=((n)*(n+1))/2;
  if(s&1){
    cout<<0;
    return 0;
  }
  int ans=(get(1,s/2)*500000004+MOD)%MOD;
  cout<<ans;
  return 0;
}