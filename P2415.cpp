#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sum=0;
    long long q = 0;
    int temp;
    int cnt = 0;
    while(scanf("%d",&temp) != EOF)
    {
        sum += temp;
        cnt ++;
    }
    q = pow(2,cnt-1);
    cout << sum*q;
    return 0;
}