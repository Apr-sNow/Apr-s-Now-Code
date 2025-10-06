#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[1000010];
int q;
int hfind(int num)
{
    int l = 0;  int r = n+1;
    while(l < r)
    {
        int md = (l + r)/2;
        if(arr[md] < num)  l = md + 1;
        else if(arr[md] > num)  r = md - 1;
        else if(arr[md] ==num)  return md;
    }
    if(arr[l] == num)   return l;
    else if(arr[r] == num)  return r;
    else    return -1;
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)  cin >> arr[i];
    for(int i = 0; i < m; i++)
    {
        cin >> q;
        int rt = hfind(q);
        while(rt != -1 && arr[rt-1] == q)   rt--;
        cout << rt << ' ';
    }
}
