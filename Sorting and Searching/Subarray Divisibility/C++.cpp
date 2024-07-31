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
  for(int i=0;i<n;i++){
    int a;cin>>a;
    temp.push_back((a+10000*n)%n);
  }
  int ans=0;
  map<int,int> mp;
  int sum=0;
  mp[0]=1;
  for(int i=0;i<n;i++){
    sum+=(temp[i]+n)%n;
    if(mp.count(sum%n)){
      ans+=mp[sum%n];
    }
    sum%=n;
    mp[sum]++;
  }
  cout<<ans;
  return 0;
}