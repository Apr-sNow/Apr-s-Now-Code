#include <bits/stdc++.h>
using namespace std;
int n;
int temp[5011][5011] = {0};
void up(int l)
{
    for(int i = 0; i < 5010; i ++)
    {
        temp[l][i + 1] += temp[l][i] / 10;
        temp[l][i] = temp[l][i] % 10;
    }
}
void bp(int g)
{
    //意思是：temp[g] = temp[g-1] + temp[g-2];
    for(int i = 0; i < 5010; i ++)
    {
        temp[g][i] = temp[g-1][i] + temp[g-2][i];
    }
}
void ff(int f)
{
    if(f > 3)   ff(f - 1);
    bp(f);//高精加
    up(f);//进位整理
}
int main()
{
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    if(n == 2)
    {
        cout << 2;
        return 0;
    }
    temp[1][0] = 1;
    temp[2][0] = 2;
    ff(n);
    int cnt = 0;
    for(int i = 0; i < 5010; i++)
    {
        if(temp[n][5010 - i - 1] != 0)  cnt = -11114514;
        else    cnt ++;
        if(cnt < 0) cout << temp[n][5010 - i - 1];
    }
    if(cnt > 0) cout << 0;
}