#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
int cal(int i){
  return (((i%MOD)*((i+1)%MOD))/2)%MOD;
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  int ans=0;
  for(int i=1;i<=n;i++){
    int j=n/(n/i);
    (ans+=((n/i)%MOD*((cal(j)-cal(i-1)+MOD)%MOD))%MOD)%=MOD;
    i=j;
  }
  cout<<ans;
  return 0;
} 