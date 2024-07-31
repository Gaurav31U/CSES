#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
//COPY
void solve(int from, int to, int depth){
    if(depth == 1){
        cout<<from<<" "<<to<<"\n";
        return;
    }

    int other = 6 - from - to;
    solve(from, other, depth-1);
    cout<<from<<" "<<to<<"\n";
    solve(other, to, depth-1);
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  cout<<((1<<n)-1)<<"\n";
  solve(1,3,n);
  return 0;
}