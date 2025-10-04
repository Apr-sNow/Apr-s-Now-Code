#include <bits/stdc++.h>
using namespace std;
int a,b;
int temp[1145][1145] = {0};
void up(int q)
{
    for(int i = 0; i < 1140; i ++)
    {
        temp[q][i + 1] += temp[q][i] / 10;
        temp[q][i] = temp[q][i] % 10;
    }
}
void hp(int q)
{
    for(int i = 0; i < 1140; i ++)
        temp[q][i] = temp[q - 1][i] + temp[q - 2][i];
    
}
int main()
{
    cin >> a >> b;
    int n = b - a;
    temp[1][0] = 1; temp[2][0] = 2;
    if(n < 3)
    {
        cout << n;
        return 0;
    }
    else {
        for(int i = 3; i <= n; i++)
        {
            hp(i);
            up(i);
        }
    }
    int cnt = 0;
    for(int i = 0; i < 1140; i++)
    {
        if(temp[n][1140 - i - 1] != 0)  cnt = -11114514;
        else    cnt ++;
        if(cnt < 0) cout << temp[n][1140 - i - 1];
    }
    if(cnt > 0) cout << 0;
}