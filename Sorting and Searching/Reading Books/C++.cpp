#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  vector<int> temp;
  int sum=0;
  int mx=0;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    mx=max(a,mx);
    sum+=a;
    temp.push_back(a);
  }
  cout<<max(sum,2*mx);
  return 0;
}