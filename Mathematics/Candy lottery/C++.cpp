#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=101;
const int INF=2e18;
const int MOD=1e9+7;
int n,m,k;
double dp[N][6*N];
signed main(){
    cin>>n>>k;
    double ans,a,b;
    for(int i=1;i<=k;i++){
        a=b=1.0;
        for(int j=1;j<=n;j++){
            a*=((double)i/k);
            b*=(double(i-1)/k);
        }
        ans+=(a-b)*i;
    }
    cout<<fixed<<setprecision(6)<<ans;
    return 0;
}