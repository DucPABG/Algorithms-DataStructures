
//DucPABG_D19PTIT

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1000000007;

ll out (ll n, ll k)
{
    ll f[n+1] = {0};
    f[0] = 1, f[1] = 1, f[2] = 2;
    for (ll i=3; i<=n; i++)
    {
        for (ll j=1; j<=k && j<=i; j++)
            f[i] += f[i-j]%M;
        f[i] %= M;
    }
    return f[n];
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n, k; cin >> n >> k;
        cout << out(n,k) << endl;
    }
    return 0;
}
