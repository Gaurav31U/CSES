#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=101;
int n,r[N];
long double ans;
int f(int x){
    return x*(x-1)/2;
}
signed main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>r[i];
        for(int j = 0; j < i; j++){
            int tot = (r[j] <= r[i]) ? f(r[j]) : (f(r[i]) + (r[j]-r[i]) * r[i]);
            ans += (long double) tot / (r[i] * r[j]);
        }
    }
    cout<<fixed<<setprecision(6)<<ans;
    return 0;
}