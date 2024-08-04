#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define BLK 500
using namespace std;
int n,m;
const int N=2e5+1;
const int maxN=1e6+1;
int prime[maxN];
signed main(){  
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  map<int,int> mp;
  for(int i=1;i<=1e6;i++)prime[i]=i;
  for(int i=2;i<=1e3;i++){
    if(prime[i]==i){
      for(int j=i*i;j<=1e6;j+=i)
        prime[j]=i;
    }
  }
  vector<int> ans;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    int cnt=1;
    while(a>1){
      mp[prime[a]]++;
      a/=prime[a];
    }
    for(auto it:mp){
      cnt*=(it.second+1);
    }
    ans.push_back(cnt);
    mp.clear();
  }
  for(auto it:ans)cout<<it<<"\n";
  return 0;

} 