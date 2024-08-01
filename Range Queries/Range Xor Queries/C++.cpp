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
  int x=0;
  temp.push_back(0);
  for(int i=0;i<n;i++){
    int a;cin>>a;
    x^=a;
    temp.push_back(x);
  }
  while(m--){
    int a,b;cin>>a>>b;
    cout<<(temp[b]^temp[a-1])<<"\n";
  }
  return 0;
}