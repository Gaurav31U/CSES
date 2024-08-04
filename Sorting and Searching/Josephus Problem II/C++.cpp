#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#pragma GCC optimize("unroll-loops")
#define int long long
#define BLK 500
using namespace std;
int n,m;
const int N=2e5+1;
tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> T;
signed main(){  
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  for(int i=1;i<=n;i++){
    T.insert(i);
  }
  int cnt=m;
  while(!T.empty()){
    cnt%=T.size();
    auto tp=T.find_by_order(cnt);
    cout<<*tp<<" ";
    T.erase(tp);
    cnt+=m;
  }
  return 0;
} 