#include <bits/stdc++.h>
using namespace std;
int n;
int brray[114] = {0};
int pls;
int tmp = 0;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> pls;
        brray[i] = pls - tmp;
        tmp = pls;
        cout << brray[i] << ' ';
    }
    
}