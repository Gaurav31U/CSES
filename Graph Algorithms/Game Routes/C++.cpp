#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;
 
int n,m;
const int N=1e5+1;
const int MOD=1e9+7;
const int INF=1e12;
int ind[N];
vector<int> adj[N];
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    adj[a].push_back(b);
    ind[b]++;
  }
  vector<int> dp(n+1,0);
  dp[1]=1;
  queue<int> q;
  for(int i=1;i<=n;i++){
    if(ind[i]==0){
      q.push(i);
    }
  }
  while(!q.empty()){
    int u=q.front();
    q.pop();
    for(auto it:adj[u]){
      (dp[it]+=dp[u])%=MOD;
      if(--ind[it]==0)q.push(it);
    }
  }
  cout<<dp[n];
  return 0;
}