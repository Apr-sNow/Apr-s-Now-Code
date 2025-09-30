#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,tmp;
    cin >> n >> m;
    int low = 114, high = -1, sum = 0;
    int big = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> tmp;
            if(tmp < low)   low = tmp;
            if(tmp > high)  high = tmp;
            sum += tmp;
        }
        if(big < sum - high - low)
            big = sum - high - low;
        low = 114;  high = -1;  sum = 0;
    }
    printf("%.2f",float(big)/(m-2));
}