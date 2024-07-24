#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int dp[1000001];
vector<int> get_digits(int n){
  vector<int> temp;
  while(n>0){
    temp.push_back(n%10);
    n/=10;
  }
  return temp;
}
int main(){
  int n;cin>>n;
  for(int i=0;i<=n;i++)dp[i]=1e6;
  dp[0]=0;
  for(int i=1;i<=n;i++){
    auto digit=get_digits(i);
    for(auto it:digit){
      dp[i]=min(dp[i],dp[i-it]+1);
    }
  }
  cout<<dp[n];
  return 0;
}