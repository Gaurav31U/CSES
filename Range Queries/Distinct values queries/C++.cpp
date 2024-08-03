#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define BLK 500
using namespace std;
int n,m;
const int N=2e5+1;
int temp[N],ans[N];
map<int,int> mp;
int cnt=0;

void add(int pos){
  mp[temp[pos]]++;
  if(mp[temp[pos]]==1)cnt++;
}
void remove(int pos){
  mp[temp[pos]]--;
  if(mp[temp[pos]]==0)cnt--;
}
signed main(){  
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  vector<array<int,3>> q;
  for(int i=1;i<=n;i++){
    cin>>temp[i];
  }
  for(int i=1;i<=m;i++){
    int a,b;cin>>a>>b;
    q.push_back({a,b,i});
  }
  sort(q.begin(),q.end(),[&](array<int,3> a,array<int,3> b){
    if((a[0]/BLK) != (b[0]/BLK))
      return (a[0]/BLK) < (b[0]/BLK);
    return a[1]<b[1];
  });
  int ML=1,MR=0;
  for(auto it:q){
    int L=it[0];
    int R=it[1];
    int idx=it[2];

    while(MR<R)MR++,add(MR);
    while(ML>L)ML--,add(ML);

    while(MR>R)remove(MR),MR--;
    while(ML<L)remove(ML),ML++;
    ans[idx]=cnt;
  }
  for(int i=1;i<=m;i++)cout<<ans[i]<<"\n";
  return 0;
} 