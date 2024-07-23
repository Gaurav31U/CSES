#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  long long s=0;
  vector<int> temp;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    temp.push_back(a);
  }
  sort(temp.begin(),temp.end());
  for(int i=0;i<n;i++){
    if(s+1<temp[i]){
      cout<<s+1;
      return 0;
    }
    s+=temp[i];
  }
  cout<<s+1;
  return 0;
}