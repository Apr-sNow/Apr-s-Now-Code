#include <bits/stdc++.h>
using namespace std;
int n;
struct q{
    string nm;
    int yy,mm,dd;
    int cnt;
}a[114];
bool cmd(q x ,q y)
{
    return (x.yy < y.yy)||
    (x.yy == y.yy && x.mm < y.mm)||
    (x.yy == y.yy && x.mm == y.mm && x.dd < y.dd)||
    (x.yy == y.yy && x.mm == y.mm && x.dd == y.dd && x.cnt > y.cnt);
}
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].yy 
            >> a[i].mm >> a[i].dd;
        a[i].cnt = i;
    }
    sort(a,a + n,cmd);
    for(int i = 0; i < n; i ++)
    {
        cout << a[i].nm << endl;
    }
}