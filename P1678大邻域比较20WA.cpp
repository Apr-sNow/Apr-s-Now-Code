#include <bits/stdc++.h>
using namespace std;
#define MAXN  100010
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
    int rang[] = {abs(line[l] - num),abs(line[r] - num),
                abs(line[l-1] - num), abs(line[r+1] - num),
                abs(line[l-2] - num), abs(line[r+2] - num)};
    return *min_element(rang, rang + 6);
    //此操作要求最终l与r相邻，要么我把分析邻域扩大一倍
}
int main()
{
    cin >> sc >> st;
    for(int i = 3; i < sc + 3; i++)    cin >> line[i];
    line[0] = -114514810;  line[sc + 3] = 114514810;
    line[1] = -114514810;  line[sc + 4] = 114514810;
    line[2] = -114514810;  line[sc + 5] = 114514810;
    sort(line,line + sc);
    for(int i = 0; i < st; i++)
    {
        cin >> sco;
        asit += hanswer(sco);
    }
    cout << asit;
}