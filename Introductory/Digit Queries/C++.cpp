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
  while(n--){
    int x;
    cin>>x;
    int digit=1;
    int val=9;
    int sum=0;
    while(val*digit<x){
      x-=(val*digit);
      sum+=val;
      val*=10;
      digit++;
    }
    val/=10;
    int num=sum+x/digit+(x%digit>0?1:0);
    string s=to_string(num);
    int k=x;
    if(k%digit==0)cout<<s.back()<<"\n";
    else cout<<s[(k%digit)-1]<<"\n";
  }
  return 0;
}