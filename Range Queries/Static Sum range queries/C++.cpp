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
  vector<int> temp;
  int s=0;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    s+=a;
    temp.push_back(s);
  }
  while(m--){
    int a,b;cin>>a>>b;
    cout<<temp[b-1]-(a>1?temp[a-2]:0)<<"\n";
  }
  return 0;
}