#include <bits/stdc++.h>
using namespace std;
#define MAXN  100010
#define int long long
int sc,st;
int line[MAXN];
int sco;
int asit = 0;
int hanswer(int num)
{
    int l = 0,r = sc + 1;
    while(l + 1 < r)
    {
        int mid = (l + r)/2;
        if      (num < line[mid])    r = mid;
        else if (num > line[mid])    l = mid;
        else if (num ==line[mid])    return 0;
        else if (num ==line[r]  )    return 0;
    }
    return min(abs(line[l] - num),abs(line[r] - num));
    //此操作要求最终l与r相邻，要么我把分析邻域扩大一倍
}
signed main()
{
    cin >> sc >> st;
    for(int i = 1; i <= sc; i++)    cin >> line[i];
    line[0] = -114514810;  line[sc + 1] = 114514810;
    sort(line + 1,line + sc +1);
    for(int i = 0; i < st; i++)
    {
        cin >> sco;
        asit += hanswer(sco);
    }
    cout << asit;
    return 0;
}