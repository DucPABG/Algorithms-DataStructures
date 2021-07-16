
//DucPABG_D19PTIT

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1000000007;

ll out (ll n)
{
    ll f[n+1] = {0};
    f[0] = 1, f[1] = 1, f[2] = 2;
    for (ll i=3; i<=n; i++)
    {
        f[i] = f[i] + f[i-1] + f[i-2] + f[i-3];
    }
    return f[n];
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        cout << out (n) << endl;
    }
    return 0;
}
