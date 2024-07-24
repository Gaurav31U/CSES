#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  long md=1e9+7;
  long long ans=1;
  long long val=2;
  while(n>0){
    if(n&1){
      (ans*=val)%=md;
      n--;
    }else{
      (val*=val)%=md;
      n>>=1;
    }
  }
  cout<<ans;
  return 0;
}