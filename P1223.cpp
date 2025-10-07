#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int wtim = 0;
int yu[1145];
signed main ()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> yu[i];
    }
    for(int i = 1; i <= n; i++)
    {
        int minn = 114514810;
        int cnt = 0;
        for(int j = 1; j <= n; j++)
        {
            if(yu[j] < minn)
            {
                minn = yu[j];
                cnt = j;
            }
        }
        wtim += (n - i) * minn;
        yu[cnt] = 114514810;
        cout << cnt << ' ';
    }
    cout << endl;
    printf("%.2f",(wtim + 0.0)/n);
}