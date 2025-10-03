#include <bits/stdc++.h>
using namespace std;
int numA[2007];
int numB[2007];
int anss[4096];
void Bmul(int a[], int b[],int x,int y)
{
    for(int i = 0; i < x; i ++)
    {
        for(int j = 0; j < y; j++)
        {
            anss[i + j] += a[i] * b[j];
        }
    }
    for(int i = 0; i < 4000; i ++)
    {
        anss[i + 1] += anss[i] / 10;
        anss[i] = anss[i] % 10;
    }
}
int main()
{
    string na,nb;
    cin >> na;
    for(int i = 0; i < na.length(); i++)
        numA[i] = na[na.length() - i - 1] - '0';
    cin >> nb;
    for(int i = 0; i < nb.length(); i++)
        numB[i] = nb[nb.length() - i - 1] - '0';
    Bmul(numA,numB,na.length(),nb.length());
    int cnt = 0;
    for(int i = 0; i < 4000; i++)
    {   
        if(anss[4000-i -1] != 0)
        {
            cnt = -114514;
        }
        else    cnt++;
        if(cnt < 0)
        {
            cout << anss[4000 - i -1];
        }
    }
    if(cnt > 0) cout << '0';
}