#include <bits/stdc++.h>
using namespace std;
void qkst(int a[], int j,int q)
{   
    int flg = (j + q) / 2;
    int l = j, r = q;
    int tmp;
    for(;l <= r;)
    {
        for(;a[l] < a[flg];l++);
        for(;a[r] > a[flg];r--);//
        if(l <= r)
        {
            tmp = a[l]; a[l] = a[r];    a[r] = tmp;
            l++;    r--;
        }
    }
    if(j < l)qkst(a, j, l);//边界条件判断
    if(r < q)qkst(a, r, q);
}
int main()
{
    int n;
    int wait[1000] = {0};
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> wait[i];
    }
    qkst(wait,0,n-1);
    for(int i = 0; i < n; i++)
    {
        cout << wait[i];
    }
}