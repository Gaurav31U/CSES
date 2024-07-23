#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr.begin(),arr.end());
  int i=0,j=0;
  int cnt=1;
  while(j<n){
    if(arr[i]==arr[j]){
      j++;
    }else{
      cnt++;
      i=j;
    }
  }
  cout<<cnt;
  return 0;
}