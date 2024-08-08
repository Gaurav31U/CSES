#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;
 
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
vector<int> adj[N];
int ind[N]; 
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    ind[b]++;
    adj[a].push_back(b);
  }
  queue<int> q;
  for(int i=1;i<=n;i++){
    if(ind[i]==0)q.push(i);
  }
  if(q.empty()){
    cout<<"IMPOSSIBLE";
    return 0;
  }
  vector<int> ans;
  while(!q.empty()){
    auto tp=q.front();
    q.pop();
    ans.push_back(tp);
    for(auto it:adj[tp]){
      if(--ind[it]==0){
        q.push(it);
      }
    }
  }   
  if(ans.size()!=n){
    cout<<"IMPOSSIBLE";
    return 0;
  }
  for(auto it:ans)cout<<it<<" ";
  return 0;
}