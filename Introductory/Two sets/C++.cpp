#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  int sum=(n*(n+1))/2;
  if(sum&1){
    cout<<"NO\n";
    return 0;
  }
  vector<int> a,b;
  if(n%4==0){
    for(int i=1;i<=n;i++){
      if(i%4==1 || i%4==0){
        a.push_back(i);
      }else{
        b.push_back(i);
      }
    }
  }else if(n%4==3){
    a.push_back(1);
    a.push_back(2);
    b.push_back(3);
    for(int i=4;i<=n;i++){
      int k=i-3;
      if(k%4==1 || k%4==0){
        a.push_back(i);
      }else{
        b.push_back(i);
      }
    }
  }
  cout<<"YES\n";
  cout<<a.size()<<"\n";
  for(auto it:a)cout<<it<<" ";
  cout<<"\n";
  cout<<b.size()<<"\n";
  for(auto it:b)cout<<it<<" ";
  return 0;
}