#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  multiset<int> ms;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    ms.insert(-val);
  }
  vector<int> ans;
  for(int i=0;i<m;i++){
    int val;cin>>val;
    auto it=ms.lower_bound(-val);
    if(it!=ms.end()){
      cout<<(-*it)<<"\n";
      ms.erase(it);
    }else{
      cout<<-1<<"\n";
    }
  }
  return 0;
}