#include <bits/stdc++.h>
using namespace std;
int n,m;
int xa,ya,xb,yb;
int cfl[1223][1223];
int lis[1223][1223];
int main()
{
    memset(cfl,0,sizeof(cfl)); 
    memset(lis,0,sizeof(lis));
    cin >> n >> m;
    for(int t = 1; t <= m; t++)
    {
        cin >> xa >> ya >> xb >> yb;
        cfl[xa][ya]++;  cfl[xb+1][yb+1]++;
        cfl[xb+1][ya]--;    cfl[xa][yb+1]--;
    }
    for(int x = 1; x <= n; x++)
    {
        for(int y = 1; y <= n; y++)
        {
            lis[x][y] = lis[x-1][y] + lis[x][y-1] - lis[x-1][y-1] + cfl[x][y];
            cout << lis[x][y] << ' ';
        }
        cout << endl;
    }
}