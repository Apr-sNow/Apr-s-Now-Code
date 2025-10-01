#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int cnt(string angry)
{
    int Agcnt = 0;
    for(int ag = 0; ag < m+k-3; ag++)//记忆化优化
    {
        if(angry[ag] != 'C')    continue;
        if(angry[ag+1] != 'D')    continue;
        if(angry[ag+2] != 'N')    continue;
        if(angry[ag+3] != 'L')    continue;
        Agcnt ++;
        ag += 3;
    }
    return Agcnt;
}
int main()
{
    int T;
    string ss,tt;
    string sm,sk;
    cin >> T;
    int maxn = 0,tmp = 0;
    for(int TT = 0; TT < T; TT++)
    {   
        cin >> n >> m >> k;
        cin >> ss >> tt;//接下来要自己调两个子串并连接
        for(int a = 0; a <= n-m; a++)
        {   
            // if(ss[a] != 'C')    continue;
            for(int b = 0; b <= n-k; b++)
            {
                // if(tt[])
                tmp = cnt(ss.substr(a,m)+tt.substr(b,k));
                if(maxn < tmp)
                {
                    maxn = tmp;
                }
            }
        }
        cout << maxn << endl;
        maxn = 0;
    }
}