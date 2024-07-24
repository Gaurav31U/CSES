#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  multiset<int> ms;
  int n;cin>>n;
  int ans=0;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    auto it=ms.upper_bound(a);
    if(it==ms.end()){
      ans++;
    }else{
      ms.erase(it);
    }
    ms.insert(a);
  }
  cout<<ans;
  return 0;
}