#include <iostream>
using namespace std;
int main()
{
    int sqr[42][42];
    int n;
    cin >> n;
    for(int i=0; i< 42; i++)//initialize
    {
        for(int j = 0; j < 42; j++)
        {
            sqr[i][j] = 0;
        }
    }
    int count = 1;
    int dw=0,rt=0;

    dw = 0;
    rt = (n-1)/2;
    sqr[dw][rt] = count;
    count ++;

    for(int i = 1; i < n*n ; i++,count++)
    {
        if(dw == 0 && rt != n-1)
        {
            dw = n-1;
            rt++;
        }
        else if(dw != 0 && rt == n-1)
        {
            dw--;
            rt = 0;
        }
        else if(dw == 0 && rt == n-1)
        {
            dw++;
        }
        else
        {
            if(sqr[dw-1][rt+1] == 0)
            {
                dw--;
                rt++;
            }
            else 
            {
                dw++;
            }
        }
        sqr[dw][rt] = count;

    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << sqr[i][j]<< ' ';
        }
        cout <<endl;
    }
    return 0;
}