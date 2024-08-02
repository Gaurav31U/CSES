#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  vector<string> grid;
  for(int i=0;i<n;i++){
    string s;cin>>s;
	grid.push_back(s);
  }
  vector<vector<int>> pre(n+1,vector<int>(n+1,0));
  for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		if(grid[i-1][j-1]=='*'){
			pre[i][j]=1;
		}
	}
  }
  for(int i=1;i<=n;i++){
	for(int j=2;j<=n;j++)
		pre[i][j]+=pre[i][j-1];
  }
  for(int i=1;i<=n;i++){
	for(int j=2;j<=n;j++){
		pre[j][i]+=pre[j-1][i];
	}
  }
  while(m--){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int val=pre[x2][y2];
	val-=pre[x2][y1-1];
	val-=pre[x1-1][y2];
	val+=pre[x1-1][y1-1];
	cout<<val<<"\n";
  }
  return 0;
}