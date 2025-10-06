#include <bits/stdc++.h>
using namespace std;
int n,m;
int ann[1000010];
int amm;
int hfind(int num)
{
    int l = 0, r = n + 1;
    while(r > l)
    {
        int md = (r + l)/2;
        if(ann[md] >= num)      r = md;
        else                    l = md +1;
    }
    if(ann[l] == num)   return l;
    else    return -1;
}
int main()
{
    memset(ann,-1,sizeof(ann));
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> ann[i];
    for(int i = 0; i < m; i++)
    {
        cin >> amm;
        cout << hfind(amm) << ' ';
    }
    return 0;
}