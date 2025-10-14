#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int cow[114514] = {0};
int cfh[114514] = {0};
int nsum = 0;
int ansum = 0;
signed main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> cow[i];
        // nsum += cow[i];
    }
    sort(cow+1,cow+n+1);
    // for(int q = 1; q <= n; q++)  cout << cow[q] << "q ";
    // cout <<endl;
    for(int i = 1; i <= n; i++)
    {
        cfh[i] = cfh[i-1] + cow[i];
    }

    for(int i = 1; i <= n; i++)
    {
        ansum += abs((i-1)*cow[i] - cfh[i-1]);
        ansum += abs(cfh[n] - cfh[i] - (n-i)*cow[i]);
    }
    cout << ansum;
}