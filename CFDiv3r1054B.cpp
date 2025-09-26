#include <iostream>
using namespace std;
int main()
{
    int t;
    int n;
    int arra[202500] = {0};
    int sor[202490] = {0};
    int tmp = 0;
    cin >> t;
    for (int i = 0; i < t ; i++)
    {
        cin >> n;
        for (int j = 0 ; j < n ; j++)
        {
            cin >> arra[j];
        }
        for (int j = 0 ; j < n ; j++)//sort
        {
            for (int q = 0 ; q < n-1 ; q++)
            {
                if (arra[q] > arra[q+1])
                {
                    tmp = arra[q];
                    arra[q] = arra[q+1];
                    arra[q+1] = tmp;
                }
            }
        }
        for (int j = 0; j < n ; j ++)
        {
            sor[j] = arra[2*j+1] - arra[2*j];
        }
        for (int j = 0; j < n/2 ; j++)
        {
            for (int q = 0 ; q < (n/2)-1 ; q++)
            {
                if (sor[q] < sor[q+1])
                {
                    tmp = sor[q];
                    sor[q] = sor[q+1];
                    sor[q+1] = tmp;
                }
            }
        }
        cout << sor[0] << endl;

    }
    return 0;
}