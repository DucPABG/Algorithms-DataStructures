
//DucPABG_D19PTIT

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1000000007;

ll out (int n, int m)
{
    ll dp[n+1][m+1];
    for (int i=0; i<=n; i++)
        dp[i][0] = 1;
    for (int i=0; i<=m; i++)
        dp[0][i] = 1;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
    return dp[n][m];
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        cout << out (n,m) << endl;
    }
    return 0;
}
