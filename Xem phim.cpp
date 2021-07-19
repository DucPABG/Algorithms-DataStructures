
//DucPABG_D19PTIT

#include <bits/stdc++.h>
using namespace std;

int out (int w[], int c, int n)
{
    int dp[n+1][c+1];
    for (int  i=0; i<=c; i++)
        dp[0][i] = 0;
    for (int i=0; i<=n; i++)
        dp[i][0] = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=c; j++)
            if (w[i-1] <= j)
                dp[i][j] = max (dp[i-1][j], max (dp[i][j-1], dp[i-1][j-w[i-1]] + w[i-1]));
            else
                dp[i][j] = max (dp[i-1][j], dp[i][j-1]);
    return dp[n][c];
}

int main()
{
//    int t; cin>>t;
//    while (t--){
        int c, n; cin >> c >> n;
        int w[n];
        for (int i=0; i<n; i++)
            cin >> w[i];
        cout << out(w,c,n) << endl;
//    }
}
