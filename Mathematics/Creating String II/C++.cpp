#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
int modExp(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
int modInverse(int n, int mod) {
    return modExp(n, mod - 2, mod);
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  string s;cin>>s;
  map<int,int> mp;
  for(int i=0;i<s.size();i++){
    mp[s[i]]++;
  }
  vector<int> fact(1e6+1,1);
  for(int i=1;i<=1e6;i++)(fact[i]*=(i*fact[i-1]))%=MOD;
  int ans=fact[s.size()];
  for(auto it:mp){
    (ans*=modInverse(fact[it.second],MOD))%=MOD;
  }
  cout<<ans;
  return 0;
}