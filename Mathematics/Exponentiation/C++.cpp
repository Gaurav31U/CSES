#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define BLK 500
using namespace std;
int n,m;
const int MOD=1e9+7;
const int N=2e5+1;
int binpow(int a,int b,int c){
  int res=1;
  while(b>0){
    if(b&1){
      (res*=a)%=c;
      b--;
    }else{
      (a*=a)%=c;
      b>>=1;
    }
  }
  return res;
}
signed main(){  
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){
    int a,b,c;cin>>a>>b;
    int res=binpow(a,b,MOD);
    cout<<res<<"\n";
  }
  return 0;

} 