#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
vector<int> val;
int dp[5001][5001][2];
int get(int i,int j,int turn){
  if(i>j)return 0;
  if(dp[i][j][turn]!=-1)return dp[i][j][turn];
  if(turn==1){
    int ans=-INF;
    ans=max({ans,get(i+1,j,turn^1)+val[i],get(i,j-1,turn^1)+val[j]});
    dp[i][j][turn]=ans;
  }else{
    int ans=INF;
    ans=min({ans,get(i+1,j,turn^1),get(i,j-1,turn^1)});
    dp[i][j][turn]=ans;
  }
  return dp[i][j][turn];
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  memset(dp,-1,sizeof(dp));
  cin>>n;
  for(int i=0,a;i<n;i++){
    cin>>a;
    val.push_back(a);
  } 
  cout<<get(0,n-1,1);
  return 0;
}