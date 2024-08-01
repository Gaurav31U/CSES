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
  int l=0,r=1e18;
  int ans=r;
  while(l<=r){
    int mid=l+(r-l)/2;
    int cnt=0;
    for(int i=0;i<n;i++){
      cnt+=(mid/temp[i]);
      if(cnt>1e9)break;
    }
    if(cnt>=m){
      ans=min(ans,mid);
      r=mid-1;
    }else{
      l=mid+1;
    }
  }
  cout<<ans;
  return 0;
}