#include <bits/stdc++.h>
using namespace std;
int t;
int lns;
string num;
int main()
{
    cin >> t;
    while (t--)
    {   
        int read = -1;
        int cnt  =  0;
        int kqlt[500114] = {0};
        cin >> lns >> num;

        for(int i = 0; i < lns; i++)
        {
            if(num[i] != read)
            {
                read = num[i];
                cnt ++;
                kqlt[cnt] ++;//从1开始计算
            }
            else    kqlt[cnt] ++;
        }

        if(cnt == 1)
        {
            cout << 0 << endl;
            continue;
        }

        int minx = 114514191;
        int Sn1[500114] = {0};
        for(int i = 1; i <= cnt; i++)//1情况
        {
            if(i % 2 == 1)  Sn1[i] = Sn1[i-1] + 2*kqlt[i];
            else            Sn1[i] = Sn1[i-1] +   kqlt[i];
        }
        int Sn2[500114] = {0};
        for(int i = 1; i <= cnt; i++)//0情况
        {   
            if(i % 2 == 0)  Sn2[i] = Sn2[i-1] + 2*kqlt[i];
            else            Sn2[i] = Sn2[i-1] +   kqlt[i];
        }

        for(int i = 1; i <= cnt; i++)
        {
            int tmp = 0;
            int typ = i % 2;
            if(typ == 1)    tmp = (Sn1[i-1] - Sn1[0]) + (Sn1[cnt] - Sn1[i]);
            else            tmp = (Sn2[i-1] - Sn2[0]) + (Sn2[cnt] - Sn2[i]);
            minx = min(minx, tmp);
        }
        cout << minx << endl;
    }
}