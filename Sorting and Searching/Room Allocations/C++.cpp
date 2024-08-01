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
  vector<int> ans(n,0);
  vector<array<int,3>> vi;
  for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    vi.push_back({a,1,i});
    vi.push_back({b,-1,i});
  }
  sort(vi.begin(),vi.end(),[&](array<int,3> a,array<int,3> b){
    if(a[0]==b[0])return a[1]>b[1];
    return a[0]<b[0];
  });
  int cnt=1;
  priority_queue<int,vector<int>,greater<int>> pq;
  for(int i=1;i<=n;i++)pq.push(i);
  for(auto it:vi){
    if(it[1]==1){
      int p=pq.top();
      pq.pop();
      ans[it[2]]=p;
    }else{
      int p=ans[it[2]];
      pq.push(p);
    }
  }
  set<int> st;
  for(auto it:ans)st.insert(it);
  cout<<st.size()<<"\n";
  for(auto it:ans)cout<<it<<" ";
  return 0;
}