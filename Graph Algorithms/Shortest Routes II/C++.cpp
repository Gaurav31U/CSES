#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int mx=1e12;
vector<pair<int,int>> adj[100001];
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
  int q;
  cin>>n>>m>>q;
  vector<vector<int>> grid(n+1,vector<int>(n+1,mx));
  for(int i=0,a,b,c;i<m;i++){
    cin>>a>>b>>c;
    grid[a][b]=min(grid[a][b],c);
    grid[b][a]=min(grid[b][a],c);
  }
  for(int i=1;i<=n;i++)grid[i][i]=0;
  for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        grid[i][j]=min(grid[i][j],grid[i][k]+grid[k][j]);
      }
    }
  }
  while(q--){
    int a,b;cin>>a>>b;
    cout<<(grid[a][b]==mx?-1:grid[a][b])<<"\n";
  }

  return 0;
}