
//DucPABG_D19PTIT

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1000000007;

ll out (int a[], int n)
{
    int LIS[n];
    for (int i=0; i<n; i++)
        LIS[i] = 1;
    int res = 1;
    for (int i=1; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (a[i] >= a[j] && LIS[i] < LIS[j]+1)
                LIS[i] += 1;
        }
        res = max (res, LIS[i]);
    }
    return (n-res);
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        cout << out (a,n) << endl;
    }
    return 0;
}
