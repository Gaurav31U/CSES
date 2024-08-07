#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
map<pair<int,int>,int> f;
int solve(int x, int y){
  if(f[{x, y}])return f[{x, y}];
  if(x == 1)return f[{x, y}] = 1;
  if(2*y <= x)return f[{x, y}] = 2*y;

  int newN = (x/2)+(x&1);
  int newK = y-x/2;

  if(x&1){
    int ans = solve(newN, newK);
    return f[{x, y}] = ((2*ans-3)+(x+1)) % (x+1);
  }
  return f[{x, y}] = 2*solve(newN, newK)-1;  
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){
    int x,y;cin>>x>>y;
    cout<<solve(x,y)<<"\n";
  }
  return 0;
} 