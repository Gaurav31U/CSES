#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=1e12;
int binpow(int a,int b,int m=MOD){
  int res=1;
  while(b>0){
    if(b%2!=0){
      (res*=a)%=m;
      b--;
    }else{
      (a*=a)%=m;
      b>>=1;
    }
  }
  return res;
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  int a=1,b=1,c=1;
  int k=1;
  for(int i=0;i<n;i++){
    int x,y;cin>>x>>y;
    (a*=(y+1))%=MOD;
    (b*=((binpow(x,y+1)-1)*binpow(x-1,MOD-2))%MOD)%=MOD;
    
    int t=binpow(x,y*(y+1)/2);
    c=(binpow(c,y+1)*binpow(t,k))%MOD;
    (k*=(y+1))%=(MOD-1);
  }
  cout<<a<<" "<<b<<" "<<c;
  return 0;
}