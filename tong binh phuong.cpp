
//DucPABG_D19PTIT

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1000000007;

int out (int n)
{
    int dp[n+1];
    if (n<=3)
        return n;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for (int i=4; i<=n; i++)
    {
        dp[i] = i;
        for (int x = 1; x<i; x++)
        {
            if (x*x > i)
                break;
            else
                dp[i] = min (dp[i], dp[i-x*x]+1);
        }
    }
    return dp[n];
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << out (n) << endl;
    }
    return 0;
}
