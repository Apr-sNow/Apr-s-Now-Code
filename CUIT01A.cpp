#include <bits/stdc++.h>
using namespace std;
int n;
int m;//不到21e
int arr[114514] = {0};
int tmp;
int l,r;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> tmp;
        arr[i] = arr[i - 1] + tmp;
    }
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> l >> r;
        cout << arr[r] - arr[l - 1] << endl;
    }
    return 0;
}