
//DucPABG_D19PTIT

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1000000007;

ll out (ll a[], ll n, ll k)
{
    ll dp[k+1];
    memset (dp, 0, sizeof(dp));
    dp[0] = 1;

    for (ll i=1; i<=k; i++)
    {
        for (ll j=0; j<n; j++)
            if (i >= a[j])
                dp[i] += dp[i-a[j]]%M;
        dp[i] %= M;
    }

    return dp[k];
}

int main ()
{
    ll t; cin >> t;
    while (t--)
    {
        ll n, k; cin >> n >> k;
        ll a[n];
        for (ll i=0; i<n; i++)
            cin >> a[i];
        cout << out (a,n,k) << endl;
    }
    return 0;
}
