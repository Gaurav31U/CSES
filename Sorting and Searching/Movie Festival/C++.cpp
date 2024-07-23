#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  vector<pair<int,int>> temp;
  for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    temp.push_back({a,b});
  }
  sort(temp.begin(),temp.end(),[&](pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
  });
  int last=temp[0].second;
  int cnt=1;
  for(int i=1;i<n;i++){
    if(last<=temp[i].first){
      last=temp[i].second;
      cnt++;
    }
  }
  cout<<cnt;
  return 0;
}