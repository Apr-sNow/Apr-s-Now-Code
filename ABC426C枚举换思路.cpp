#include <bits/stdc++.h>
using namespace std;
int n,q;
int pc[1000114] = {0};
int beh = 0, frt = 0;
int ex_idx;
int main()
{
    cin >> n >> q;//n是数组距离
    for(int i = 0; i < q; i++)
    {
        int cnt = 0;
        frt = beh;  cin >> beh; cin >> ex_idx;
        if(beh < frt)
        {
            beh = frt;
            cout << '0' << endl;
            continue;
        }
        cnt += beh - frt;
        pc[ex_idx] += (beh - frt);
        for(int j = frt + 1; j <= beh; j++)
        {
            cnt += pc[j];
            pc[ex_idx] += pc[j];
        }
        cout << cnt << endl;
    }
}