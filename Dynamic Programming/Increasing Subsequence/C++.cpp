#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;cin>>n;
  multiset<int> st;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    st.insert(a);
    auto it=st.lower_bound(a);
    it++;
    if(it!=st.end())
      st.erase(it);
  }
  cout<<st.size();
  return 0;
}