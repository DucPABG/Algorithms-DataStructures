
//DucPABG_D19PTIT

#include <bits/stdc++.h>
using namespace std;

int out (int a[], int n, int s)
{
    bool dp[n+1][s+1];
    memset (dp, 0, sizeof(dp));
    for (int i=1; i<=n; i++)
        dp[i][0] = 1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=s; j++)
        {
            if (a[i-1] == j)
                dp[i][j] = 1;
            else
                dp[i][j] = max (dp[i-1][j], dp[i-1][j-a[i-1]]);
        }
        if (dp[i][s])
            return 1;
    }
    return dp[n][s];

}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n, s; cin >> n >> s;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        if (out(a, n, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
