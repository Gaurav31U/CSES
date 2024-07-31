#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  vector<int> temp;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    temp.push_back(a);
  }
  int ans=0;
  int j=0;
  map<int,int> mp;
  int cnt=0;
  for(int i=0;i<n;i++){
    if(mp[temp[i]]==0){
      cnt++;
    }
    mp[temp[i]]++;
    if(cnt<=m){
      ans+=(i-j+1);
    }else{
      while(j<n && cnt>m){
        if(mp[temp[j]]==1)cnt--;
        mp[temp[j]]--;
        j++;
      }
      ans+=(i-j+1);
    }
  }
  cout<<ans;
  return 0;
}