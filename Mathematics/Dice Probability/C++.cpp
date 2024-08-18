#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=101;
const int INF=2e18;
const int MOD=1e9+7;
int n,m;
double dp[N][6*N];
signed main(){
    int a,b;
    cin>>n>>a>>b;
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6*N;j++){
            for(int k=1;k<=6;k++){
                if(j-k>=0)
                    dp[i][j]+=dp[i-1][j-k]/6;
            }
        }
    }
    double sum=0;
    for(int i=a;i<=b;i++)
        sum+=dp[n][i];
    cout<<fixed<<setprecision(6)<<sum;
    return 0;
}