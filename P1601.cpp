#include <bits/stdc++.h>
using namespace std;
int na[514] = {0},nb[514] = {0};
void kqlt(int lns)//学会传数组过去
{
    int tmp =0;
    int ans[514] = {0};
    for(int q = 0; q < lns; q++)
    {
        ans[q] = (na[q] + nb[q] + tmp)%10;
        tmp = (na[q] + nb[q] + tmp) / 10;
    }
    if(tmp != 0)
    {
        ans[lns] = tmp;
        lns++;
    }
    for(int q = 0; q < lns; q++)
    {
        cout <<ans[lns -q -1];
    }
}
int main()
{
    string a,b;
    cin >> a >> b;
    for(int i = 0; i < a.length(); i++)
    {
        na[i] = a[a.length()-i-1] - '0';
        // cout << na[i] <<"q" << endl;
    }
    for(int i = 0; i < b.length(); i++)
    {
        nb[i] = b[b.length()-i-1] - '0';
        // cout << nb[i] <<"p" << endl;
    }
    kqlt(max(a.length(),b.length()));
}