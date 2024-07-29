#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
long dp[1000001];
int n,m;
long md=1e9+7;
vector<vector<int>> dxy={{-1,0},{1,0},{0,1},{0,-1}};
void dfs(int x,int y,vector<vector<int>> &vis,vector<string> &grid){
  vis[x][y]=1;
    for(int i=0;i<4;i++){
      int nx=x+dxy[i][0];
      int ny=y+dxy[i][1];
      if(nx>=0 && ny>=0 && nx<n && ny<m && vis[nx][ny]==0 && grid[nx][ny]=='.'){
        dfs(nx,ny,vis,grid);
      }
    }
}
int main(){
  cin>>n>>m;
  vector<string> grid;
  for(int i=0;i<n;i++){
    string s;cin>>s;
    grid.push_back(s);
  }
  vector<vector<int>> vis(n,vector<int>(m,0));
  int cnt=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(vis[i][j]==0 && grid[i][j]=='.'){
        cnt++;
        dfs(i,j,vis,grid);
      }
    }
  }
  cout<<cnt;
  return 0;
}