#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  if(n==2 || n==3){
    cout<<"NO SOLUTION";
  }else if(n==4){
    cout<<"2 4 1 3";
  }else{
    vector<int> temp;
    for(int i=n;i>=1;i-=2)temp.push_back(i);
    for(int i=n-1;i>=1;i-=2)temp.push_back(i);
    for(auto it:temp)cout<<it<<" ";
  }
  return 0;
}