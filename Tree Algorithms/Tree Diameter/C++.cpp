#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define BLK 500
using namespace std;
int n,m;
const int MOD=1e9+7;
const int N=2e5+1;
int dis=0;
int node=0;
vector<int> adj[N];
void dfs(int i,int par,int d){
  if(d>dis){
    dis=d;
    node=i;
  }
  for(auto it:adj[i]){
    if(it!=par){
      dfs(it,i,d+1);
    }
  }
}
signed main(){  
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  for(int i=1;i<n;i++){
    int a,b;cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  dfs(1,-1,0);
  dis=0;
  dfs(node,-1,0);
  cout<<dis;
  return 0;

} 