#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
vector<pair<int,int>> adj[100001];
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
  cin>>n>>m;
  for(int i=0,a,b,c;i<m;i++){
    cin>>a>>b>>c;
    adj[a].push_back({b,c});
  }
  pq.push({0,1});
  vector<int> dis(n+1,1e15);
  dis[1]=0;
  while(!pq.empty()){
    auto tp=pq.top();
    int d=tp.first;
    int node=tp.second;
    pq.pop();
    if(dis[node]!=d)continue;   // IMPORTANT LINE REGARED AS TLE
    for(auto it:adj[node]){
      if(d+it.second<dis[it.first]){
        dis[it.first]=d+it.second;
        pq.push({dis[it.first],it.first});
      }
    } 
  }
  for(int i=1;i<=n;i++){
    cout<<dis[i]<<" ";
  }
  return 0;
}