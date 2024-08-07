#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
int factorial(int n, const vector<int>& fact) {
    return fact[n];
}
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
int binomialCoefficient(int n, int k, const vector<int>& fact) {
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    int num = fact[n];
    int denom = (fact[k] * fact[n - k]) % MOD;
    return (num * modInverse(denom, MOD)) % MOD;
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  vector<int> fact(1e6+1,1);
  for(int i=1;i<=1e6;i++)(fact[i]*=(i*fact[i-1]))%=MOD;
  for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    cout<<binomialCoefficient(a,b,fact)<<"\n";
  }
  return 0;
}