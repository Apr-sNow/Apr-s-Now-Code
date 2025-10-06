#include <bits/stdc++.h>
using namespace std;
int chs[15][15] = {0};
int ans[15] = {0};
int queen;
int cnt = 0;
bool ju(int x, int y)
{
    for(int j = 0; j < y; j ++)
    {
        if(x == ans[j]) return false;
        if(x == ans[j] + y-j)   return false;
        if(x == ans[j] - y+j)   return false;
    }
    return true;
}
void dfs(int d)
{
    if(d == queen)//判定结束的接电位置放在哪？
    {
        cnt ++;
        if(cnt <= 3)
        {
            for(int c = 0; c < queen; c++)
            {
                cout << ans[c] << ' ';
            }
            cout << endl;
        }
        return;
    }
    for(int i = 1; i <= queen; i ++)
    {
        if(ju(i,d))
        {
            ans[d] = i;
            dfs(d+1);
            ans[d] = 0;
        }
    }
}

int main()
{
    cin >> queen;
    dfs(0);
    cout << cnt;
}