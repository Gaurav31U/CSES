#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;
 
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
vector<int> prefix_function(string s) {
  int n = (int)s.length();
  vector<int> pi(n,0);
  for (int i = 1; i < n; i++) {
    int j = pi[i-1];
    while (j > 0 && s[i] != s[j])
      j = pi[j-1];
    if (s[i] == s[j])
      j++;
    pi[i] = j;
  }
  return pi;
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  string s,t;cin>>s>>t;
  int j=0;
  int cnt=0;
  auto vi=prefix_function(t+'#'+s);
  for(auto it:vi)if(it==t.size())cnt++;
  cout<<cnt;
  return 0;
}