#include <bits/stdc++.h>
using namespace std;
int n,m;
int arn[1000100];
int arm[100010];
int unik(int num,int site)
{
    for(;arn[site - 1] == num;site--);
    return site;
}
void hfind(int num,int l, int r)
{
    if(r > l)
    {
        if(num < arn[(l + r)/2])    hfind(num,l,(l + r)/2);
        else if(num > arn[(l + r)/2])    hfind(num,(l + r)/2,r);
        else if(num ==arn[(l + r)/2])
        {
            cout << unik(num,(l + r)/2) << ' ';
            return;
        }
    }
    cout << -1 << ' ';
    return;
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> arn[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> arm[i];
        if(arn[1] == arm[i]){
            cout << arn[1] << ' ';  continue;
        }
        if(arn[n] == arm[i]){
            cout << arn[n] << ' ';  continue;
        }
        hfind(arm[i],1,n);
    }
}