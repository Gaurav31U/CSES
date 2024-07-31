#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  vector<int> temp;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    temp.push_back(a);
  }
  stack<int> st;
  vector<int> ans;
  for(int i=0;i<n;i++){
    if(st.empty()){
      ans.push_back(0);
    }else{
      while(!st.empty() && temp[st.top()-1]>=temp[i]){
        st.pop();
      }
      if(st.empty()){
        ans.push_back(0);
      }else ans.push_back(st.top());
    }
    st.push(i+1);
  }
  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }
  return 0;
}