#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  vector<int> d(1e6+1,0);
  for(int i=0;i<n;i++){
    int a;cin>>a;
    d[a]++;
  }
  for(int i=1e6;i>=1;i--){
    int cnt=0;
    for(int j=i;j<=1e6;j+=i)
      cnt+=d[j];
    if(cnt>1){
      cout<<i;
      return 0;
    }
  }
  return 0;
} 