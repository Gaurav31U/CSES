#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int total=0;
  cin>>n;
  vector<int> vi;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    total+=a;
    vi.push_back(a);
  }
  int ans=INT_MAX;
  for(int i=0;i<(1<<n);i++){
    int s=0;
    for(int j=0;j<n;j++){
      if((i&(1<<j))==0){
        s+=vi[j];
      }
    }
    ans=min(ans,abs(total-2*s));
  }
  cout<<ans;
  return 0;
}