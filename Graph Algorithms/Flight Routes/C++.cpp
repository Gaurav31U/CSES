#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;
 
int n,m;
const int N=1e5+1;
const int MOD=1e9+7;
const int INF=1e12;
int vis[N];
vector<pair<int,int>> adj[N];
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int k;
  cin>>n>>m>>k;
  for(int i=0;i<m;i++){
    int a,b,c;cin>>a>>b>>c;
    adj[a].push_back({b,c});
  }
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
  pq.push({0,1});
  while(!pq.empty()){
    auto tp=pq.top();
    pq.pop();
    vis[tp.second]++;
    if(tp.second==n){
      cout<<tp.first<<" ";
      if(vis[tp.second]==k)return 0;
    }
    if(vis[tp.second]<=k){
      for(auto it:adj[tp.second]){
        pq.push({tp.first+it.second,it.first});   
      }
    }
  }
  return 0;
}