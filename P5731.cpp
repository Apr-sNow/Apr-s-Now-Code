#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int snak[10][10];
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            snak[i][j] = 0;
        }
    }
    int dw = 0,rt = 0;
    int count = 1;
    for (int w = 0; w < (n+1)/2 ;w++)
    {
        if (w+1 == (n+1)/2)
            snak[dw][rt] = count;
        for(;rt < n-1-w; rt++)
        {
            snak[dw][rt] = count;
            count++;
        }
        for(;dw < n-1-w; dw++)
        {
            snak[dw][rt] = count;
            count++;
        }
        for(;rt > w; rt--)
        {
            snak[dw][rt] = count;
            count++;
        }
        for(;dw > w; dw--)
        {
            snak[dw][rt] = count;
            count++;
        }
        dw++;
        rt++;
    }

    for(int i = 0;i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << setw(3) << setfill(' ') << snak[i][j];
        }
        cout << endl;
    }
    return 0;
}