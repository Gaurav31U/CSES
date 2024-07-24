#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int dp[1000001];
int main(){
  int n;cin>>n;
  dp[0]=1;
  int md=1e9+7;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=6;j++){
      if(i>=j)(dp[i]+=dp[i-j])%=md;
    }
  }
  cout<<dp[n];
  return 0;
}