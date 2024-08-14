#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;
 
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
vector<int> z_function(string s) {
  int n = s.size();
  vector<int> z(n);
  int l = 0, r = 0;
  for(int i = 1; i < n; i++) {
    if(i < r) {
      z[i] = min(r - i, z[i - l]);
    }
    while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
      z[i]++;
    }
    if(i + z[i] > r) {
      l = i;
      r = i + z[i];
    }
  }
  return z;
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  string s;cin>>s;
  auto vi=z_function(s);
  for(int i=vi.size()-1;i>=0;i--)
      if(vi[i]==(vi.size()-i))
          cout<<vi[i]<<" ";
  return 0;
}
