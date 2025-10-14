#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,c;
int tmap[1145][1145] = {0};
int tmpy = 0;
// int tmpx[1145] = {0};
signed main()
{
    cin >> n >> m >> c;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> tmpy;
            tmap[i][j] = tmap[i][j-1] + tmap[i-1][j] + tmpy - tmap[i-1][j-1];//有病，第一行输入不了
        }
    }
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= m; j++)
    //     {
    //         cout << "  " <<tmap[i][j];
    //     }
    //     cout << endl;
    // }
    int maxn = -1145141919;
    int locx = 0, locy = 0;
    for(int i = c; i <= n; i++)
    {
        for(int j = c; j <= m; j++)
        {
            if(maxn < (tmap[i][j] + tmap[i-c][j-c] - tmap[i-c][j] - tmap[i][j-c]))
            {
                maxn = tmap[i][j] + tmap[i-c][j-c] - tmap[i-c][j] - tmap[i][j-c];
                // cout << maxn << 'q' <<endl;
                locx = i-c+1; locy = j-c+1;
            }
        }
    }
    cout << locx << ' ' << locy;
}
// //24min All WA
//  40min AWA