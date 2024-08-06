#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
const int N=2e5+1;
const int INF=1e12;
vector<int> adj[N];
int lca[N][22];
int level[N];

void dfs(int i=1,int par=-1,int d=1){
  lca[i][0]=par;
  level[i]=d;
  for(auto it:adj[i]){
    if(it==par)continue;
    dfs(it,i,d+1);
  }
}

void init(){
  dfs(); 
  for(int j=1;j<=20;j++){
    for(int i=1;i<=n;i++){
      if(lca[i][j-1]!=-1){
        int par=lca[i][j-1];
        lca[i][j]=lca[par][j-1];
      }
    }
  }
} 

int LCA(int a,int b){
  if(level[a]>level[b])swap(a,b);
  int d=level[b]-level[a];
  while(d>0){
    int i=log2(d);
    b=lca[b][i];
    d-=(1<<i);
  }
  if(a==b)return a;
  for(int i=20;i>=0;i--){
  if(lca[a][i]!=-1 && lca[a][i]!=lca[b][i])
    a=lca[a][i],b=lca[b][i];
  }
  return lca[a][0];
}

signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  memset(lca,-1,sizeof(lca));
  for(int i=2;i<=n;i++){
    int a,b;cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  init();
  for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    int t=LCA(a,b);
    int ans=level[a]+level[b]-2*level[t];
    cout<<ans<<"\n";
  }
  return 0;
} 