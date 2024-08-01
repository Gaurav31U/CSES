#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
int seg[800001];
    int arr[200001];
    void build(int s,int i,int j){
        if(i==j){
            seg[s]=arr[i];
            return;
        }
        int mid=(i+j)/2;
        build(2*s+1,i,mid);
        build(2*s+2,mid+1,j);
        seg[s]=min(seg[2*s+1],seg[2*s+2]);
    }
    int query(int s,int i,int j,int qi,int qj){
        if(j<qi || i>qj){
            return INT_MAX;
        }
        if(qi<=i && j<=qj){
            return seg[s];
        }
        int mid=(i+j)/2;
        int l=query(2*s+1,i,mid,qi,qj);
        int r=query(2*s+2,mid+1,j,qi,qj);
        return min(l,r);
    }
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  vector<int> temp;
  int s=0;
  for(int i=0;i<n;i++){
    cin>>arr[i+1];
  }
  build(1,1,n);
  while(m--){
    int a,b;cin>>a>>b;
    cout<<query(1,1,n,a,b)<<"\n";
  }
  return 0;
}