
//DucPABG_D19PTIT

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1000000007;

int out (int n, int ins, int det, int cop)
{
    int dp[n+1] = {0};
    dp[0] = 0;
    dp[1] = ins;
    
    for (int i=2; i<=n; i++)
        if (i%2 == 0)
            dp[i] = min (dp[i-1]+ins, dp[i/2]+cop);
        else
            dp[i] = min (dp[i-1]+ins, dp[i/2+1]+cop+det);

    return dp[n];
}

int main ()
{
    ll t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int ins, det, cop; cin >> ins >> det >> cop;
        cout << out (n,ins,det,cop) << endl;
    }
    return 0;
}
