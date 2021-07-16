#include <bits/stdc++.h>
using namespace std;

int out (int a[], int n)
{
    int res = a[0], curr_sum = a[0];
    for (int i=1; i<n; i++){
        curr_sum = max (a[i], curr_sum+a[i]);
        cout << curr_sum << " ";
        res = max (res, curr_sum);
    }
    return res;
}
int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        cout << out(a,n) << endl;
    }
}
