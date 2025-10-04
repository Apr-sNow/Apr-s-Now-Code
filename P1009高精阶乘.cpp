#include <bits/stdc++.h>
using namespace std;
int Mans[65];
int Pans[65];
void bm(int a[],int b)
{
    for(int q = 0; q < 65; q++)
    {
        a[q] *= b;
    }
}
void bp(int a[],int b[])
{
    for(int q = 0; q < 65; q++)
    {
        a[q] += b[q];
    }
}
void up(int ans[])
{
    for(int q = 0; q < 65; q++)
    {
        ans[q + 1] += ans[q] / 10;
        ans[q] = ans[q] % 10;
    }
}
// int its(int num)
// {
//     int la[65]= {0};
//     for(int q;;q++)
//     {
//         int p = pow(10,q - 1);
//         la[q] = num % p;
//     }
//     return la;
// }

int main()
{   
    int n;
    cin >> n;
    for(int l = 0; l < n; l++)
    {  
        Mans[0] = 1;
        for(int k = 1; k < n - l; k++)
        {
            bm(Mans,k + 1);
            up(Mans);
        }
        bp(Pans,Mans);
        for(int z = 0; z < 65; z++) Mans[z] = 0;
    }
    up(Pans);
    int cnt = 0;
    for(int i = 0; i < 65; i ++)
    {
        if(Pans[65 - i - 1] != 0)
            cnt = -114514;
        else
            cnt ++;
        if(cnt < 0)
        cout << Pans[65 - 1 - i];
    }
}