#include <iostream>
using namespace std;

int out (int a[], int n)
{
    int LIS[n];
    for (int i=0; i<n; i++)
        LIS[i] = 1;
    int res = 1;
    for (int i=1; i<n; i++){
        for (int j=0; j<i; j++){
            if (a[i]>a[j])
                LIS[i] = max(LIS[i], LIS[j]+1);
            if (LIS[i] > res)
                res = LIS[i];
        }
    }
    return res;
}

int main ()
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
