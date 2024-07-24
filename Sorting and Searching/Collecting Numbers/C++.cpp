#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> arr(n+1);
  for(int i=1;i<=n;i++){
    int a;cin>>a;
    arr[a]=i;
  }
  int cnt=1;
  for(int i=1;i<n;i++){
    if(arr[i]>arr[i+1])cnt++;
  }
  cout<<cnt;
  return 0;
}