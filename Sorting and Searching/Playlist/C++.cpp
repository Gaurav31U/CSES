#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  map<int,int> mp;
  int n;cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    arr.push_back(a);
  }
  int ans=0;
  int j=0;
  for(int i=0;i<n;i++){
    if(mp[arr[i]]==0){
      mp[arr[i]]++;
    }else{
      while(mp[arr[i]]!=0){
        mp[arr[j]]--;
        j++;
      }
      mp[arr[i]]++;
    }
    ans=max(ans,i-j+1);
  }
  cout<<ans;
  return 0;
}