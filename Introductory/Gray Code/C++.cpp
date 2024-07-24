#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
string to_bitstring(int num, int bits) {
    return std::bitset<32>(num).to_string().substr(32 - bits);
}
int main(){
  int n;cin>>n;
  for(int i=0;i<(1<<n);i++){
    cout<<to_bitstring((i ^ (i >> 1)),n)<<"\n";
  }
  return 0;
}