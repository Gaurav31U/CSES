#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
// COPIED
int solve(int x, int y){
    int l = max(x, y)-1;
    if(l&1){
        if(x < y)return l*l + x;
        else return l*l+2*l-y+2;
    } else {
        if(x < y)return l*l+2*l-x+2;
        else return l*l + y;
    }
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  while(n--){
    int a,b;cin>>a>>b;
    cout<<solve(a,b)<<"\n";
  }
  return 0;
}