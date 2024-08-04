#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define BLK 500
using namespace std;
int n,m;
const int N=2e5+1;
signed main(){  
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  int ans=n;
  set<int> f,b;
  f.insert(n);
  b.insert(0);
  set<array<int,3>> pq;
  pq.insert({n,0,n});
  for(int i=0;i<m;i++){
    int a;cin>>a;
    auto tp=*pq.rbegin();
    auto x=-(*b.upper_bound(-a));
    b.insert(-a);
    auto y=*f.upper_bound(a);
    f.insert(a);
    pq.erase(pq.find({y-x,x,y}));
    pq.insert({a-x,x,a});
    pq.insert({y-a,a,y});
    ans=(*(--pq.end()))[0];
    cout<<ans<<" ";
  }
  return 0;
} 