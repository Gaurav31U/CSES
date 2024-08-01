#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
int seg[800001];
int lazy[800001];
int arr[200001];
void build(int s,int i,int j){
	if(i==j){
		seg[s]=arr[i];
		return;
	}
	int mid=(i+j)/2;
	build(2*s+1,i,mid);
	build(2*s+2,mid+1,j);
	seg[s]=seg[2*s+1]+seg[2*s+2];
}
int query(int s,int i,int j,int qi,int qj){
	
	if(lazy[s]!=0){
		int dx=lazy[s];
		lazy[s]=0;
		seg[s]+=dx*(j-i+1);
		
		if(i!=j){
			lazy[2*s+1]+=dx;
			lazy[2*s+2]+=dx;
		}	
	}

	if(j<qi || i>qj){
		return 0;
	}
	if(qi<=i && j<=qj){
		return seg[s];
	}
	int mid=(i+j)/2;
	int l=query(2*s+1,i,mid,qi,qj);
	int r=query(2*s+2,mid+1,j,qi,qj);
	return l+r;
}
void update(int s,int i,int j,int ind,int val){
	if(i==j){
		arr[ind]=val;
		seg[s]=val;
		return;
	}
	int mid=(i+j)/2;
	if(ind<=mid)update(2*s+1,i,mid,ind,val);
	else update(2*s+2,mid+1,j,ind,val);
	seg[s]=seg[2*s+1]+seg[2*s+2];	
}
void updateRange(int s,int i,int j,int a,int b,int val){
	if(lazy[s]!=0){
		int dx=lazy[s];
		lazy[s]=0;
		seg[s]+=dx*(j-i+1);
		
		if(i!=j){
			lazy[2*s+1]+=dx;
			lazy[2*s+2]+=dx;
		}	
	}

	if(j<a || b<i)return;
	if(i>=a && j<=b){
		int dx=(j-i+1)*val;
		seg[s]+=dx;
		if(i!=j){
			lazy[2*s+1]+=val;
			lazy[2*s+2]+=val;
		}
		return;
	}
	int mid=(i+j)/2;
	updateRange(2*s+1,i,mid,a,b,val);
	updateRange(2*s+2,mid+1,j,a,b,val);
	seg[s]=seg[2*s+1]+seg[2*s+2];	
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>arr[i+1];
  }
  build(1,1,n);
  while(m--){
    int q;cin>>q;
    if(q==1){
      int a,b,u;cin>>a>>b>>u;
      updateRange(1,1,n,a,b,u);
    }else{
      int a;cin>>a;
      cout<<query(1,1,n,a,a)<<"\n";
    }
  }
  return 0;
}