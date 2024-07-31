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
  vector<vector<int>> temp;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    temp.push_back({a,i+1});
  }
  sort(temp.begin(),temp.end());
  for(int i=0;i<n;i++){
    for(int l=i+1;l<n;l++){
      int j=l+1,k=n-1;
        
      int s=m-temp[i][0]-temp[l][0];
      while(j<k){
        int t=temp[j][0]+temp[k][0];
        if(t==s){
          cout<<temp[l][1]<<" "<<temp[j][1]<<" "<<temp[i][1]<<" "<<temp[k][1];
          return 0;
        }else if(t>s){
          k--;
        }else j++;
      }
    }
  }
  cout<<"IMPOSSIBLE";
  return 0;
}