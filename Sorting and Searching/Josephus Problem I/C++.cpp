#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define BLK 500
using namespace std;
int n,m;
const int N=2e5+1;
signed main(){  
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  int cnt=1;
  multiset<int> st;
  for(int i=1;i<=n;i++){
    st.insert(i);
  }
  while(!st.empty()){
    auto tp = st.upper_bound(cnt);
    if(tp==st.end())tp=st.begin();
    cnt=*tp;
    st.erase(tp);
    cout<<cnt<<" ";
    auto nx=st.upper_bound(cnt);
    if(nx==st.end())nx=st.begin();
    cnt=*nx;
  }
  return 0;
} 