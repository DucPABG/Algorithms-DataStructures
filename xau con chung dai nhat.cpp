#include <bits/stdc++.h>
using namespace std;

//DucPABG_D19PTIT

int out (string a, string b)
{
    int n = a.size()+1, m = b.size()+1;
    int LCS[n][m];
    memset (LCS, 0, sizeof(LCS));
    
    for (int i=1; i<n; i++)
    {
        for (int j=1; j<m; j++)
        {
            if (a[i-1]== b[j-1])
                LCS[i][j] = max (LCS[i-1][j-1]+1, max(LCS[i][j-1], LCS[i-1][j]));
            else
                LCS[i][j] =  max(LCS[i][j-1], LCS[i-1][j]);
        }
    }
    
    return LCS[n-1][m-1];
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string a, b; cin >> a >> b;
        cout << out (a, b) << endl;
    }
    return 0;
}
