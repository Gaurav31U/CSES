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
  while(l<=r){
	int mid=l+(r-l)/2;
	int cnt=0,s=0;
	for(int i=0;i<n;i++){
		if(cnt>m)break;
		if(temp[i]>mid){
			cnt=INT_MAX;
			break;
		}
		if(s+temp[i]>mid){
			cnt++;
			s=temp[i];
		}else{
			s+=temp[i];
			if(s==m){
				s=0;
				cnt++;
			}
		}
		if(cnt>=m)break;
	}
	if(cnt>=m){
		l=mid+1;
	}else{
		r=mid-1;
	}
  }
  cout<<l;
  return 0;
}