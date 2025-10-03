#include <bits/stdc++.h>
using namespace std;
void qsort(int q[],int x,int y)
{
    int tmp,l = x,r = y;
    int mid = q[(x+y)/2];
    for(;l <= r;)
    {
        for(;q[l] < mid;l++);
        for(;q[r] > mid;r--);
        if(l <= r)
        {
            tmp = q[l]; q[l] = q[r]; q[r] = tmp;
            l++;
            r--;
        }
    }
    if(x < r)   qsort(q,x,r);
    if(l < y)   qsort(q,l,y);
}
int main()
{
    int n;
    int wait[100010];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> wait[i];
    }
    qsort(wait, 0, n-1);
    for(int i = 0; i < n; i++)
    {
        cout << wait[i] << ' ';
    }
}