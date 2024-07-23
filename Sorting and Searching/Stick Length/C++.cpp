#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> temp;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    temp.push_back(a);
  }
  sort(temp.begin(),temp.end());
  int val=temp[n/2];
  long long ans=0;
  for(auto it:temp){
    ans+=abs(it-val);
  }
  cout<<ans;
  return 0;
}