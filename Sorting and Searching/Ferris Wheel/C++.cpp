#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int ans=0;
  int n,x;cin>>n>>x;
  vector<int> arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];
  int i=0,j=n-1;
  sort(arr.begin(),arr.end());
  while(i<=j){
    if(arr[i]+arr[j]<=x){
      i++,j--;
      ans++;
    }else{
      j--;
      ans++;
    }
  }
  cout<<ans;
  return 0;
}