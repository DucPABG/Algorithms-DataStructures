#include <iostream>
using namespace std;

int out (string a, string b)
{
    int n, m;
    n = a.size(), m = b.size();
    int LCS[n+1][m+1];
    int res = 0;
    for (int i=0; i<=n; i++){
        for (int j=0; j<=m; j++){
            if (i==0 || j==0)
                LCS[i][j] = 0;
            else if (a[i-1] == b[j-1])
                LCS[i][j] = LCS[i-1][j-1] + 1;
            else
                LCS[i][j] = max (LCS[i][j-1], LCS[i-1][j]);
            if (LCS[i][j] > res)
                res = LCS[i][j];
        }
    }
    return res;
}

int main()
{
    int t; cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        cout << out(a,b) << endl;
    }
}
