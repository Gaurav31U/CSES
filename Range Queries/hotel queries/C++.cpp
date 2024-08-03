#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
const int N=2e5+1;
int h[N],lo[4*N],hi[4*N],mx[4*N],mp[N];
void pull(int i){
  mx[i]=(h[mx[2*i]]>=h[mx[2*i+1]]? mx[2*i]:mx[2*i+1]);
}
void init(int i,int l,int r){
  lo[i]=l;hi[i]=r;
  if(l==r){
    mp[l]=i;
    mx[i]=l;
    return;
  }
  int mid=l+(r-l)/2;
  init(2*i,l,mid);
  init(2*i+1,mid+1,r);
  pull(i);
}
void update(int i,int v){
  h[i]-=v;
  i=mp[i];
  i>>=1;
  while(i>0){
    pull(i);
    i>>=1;
  }
}
int find(int i,int v){
  if(lo[i]==hi[i])return lo[i];
  return (h[mx[2*i]]>=v?find(2*i,v):find(2*i+1,v));
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
   cin>>n>>m;
   for(int i=1;i<=n;i++){
    cin>>h[i];
   }
   init(1,1,n);
   for(int i=0;i<m;i++){
    int a;cin>>a;
    int ans=h[mx[1]]<a?0:find(1,a);
    if(ans)update(ans,a);
    cout<<ans<<" ";
   }
  return 0;
}