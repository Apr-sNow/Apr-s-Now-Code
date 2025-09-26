#include <iostream>
using namespace std;
int plot[114][114];
int main()
{
    int n;
    int tor;
    int lim;
    int dw = 0,rt = 0;
    int count = 0;
    cin >> n >> tor >> lim;
    for (int j = 0; j < tor ; j++)
    {
        cin >>dw >> rt;
        dw+=2;
        rt+=2;
        plot[dw][rt] = 2;
        plot[dw][rt - 2] = 1;
        plot[dw][rt + 2] = 1;
        for(int i = dw - 1; i <= dw+1; i++)
            plot[i][rt-1] = 1;
        for(int i = dw - 1; i <= dw+1; i++)
            plot[i][rt+1] = 1;
        for(int i = dw - 2; i <= dw+2; i++)
            plot[i][rt] = 1;
    }
    for (int j = 0; j < lim ; j++)
    {
        cin >> dw >> rt;
        dw+=2;
        rt+=2;
        plot[dw][rt] = 2;
        for(int i = dw - 2; i <= dw + 2; i++)
        {
            for (int q = rt - 2; q <= rt + 2;q++)
            {
                plot[i][q] = 1;
            }
        }
    }
    for (int i = 3; i < n+3 ; i++)
    {
        for(int j = 3 ; j < n+3; j++)
        {
            if(plot[i][j] == 0)
            {
                count++;
            }
        }

    }
    cout << count;
    return 0;
}