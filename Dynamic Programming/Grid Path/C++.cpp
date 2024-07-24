#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int md=1e9+7;
int dp[1001][1001];
int main(){
  int n;cin>>n;
  vector<string> vi;
  for(int i=0;i<n;i++){
    string s;cin>>s;
    vi.push_back(s);
  }
  memset(dp,0,sizeof(dp));
  for(int i=n-1;i>=0;i--){
    if(vi[n-1][i]=='*')break;
    dp[n-1][i]=1;
  }
  for(int i=n-1;i>=0;i--){
    if(vi[i][n-1]=='*')break;
    dp[i][n-1]=1;
  }
  for(int i=n-2;i>=0;i--){
    for(int j=n-2;j>=0;j--){
      if(vi[i][j]=='*'){
        dp[i][j]=0;
      }else{
        dp[i][j]=(dp[i+1][j]+dp[i][j+1])%md;
      }
    }
  }
  cout<<dp[0][0];
  return 0;
}