#include <iostream>
using namespace std;
int main()
{
    int t;
    int n;
    int k;
    int arra[202500] = {0};
    int sor[202500] = {0};
    cin >> t;
    int ope = 0;
    int opp = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        for (int j = 0 ; j < n ; j++)
        {
            cin >> arra[j];
            if (arra[j] == k)
            {
                ope++;
            }

        }
        for (int j = 0 ; j < n; j++)
        {
            sor[arra[j]]++;
        }
        for (int j = 0 ; j < k; j++)
        {
            if(sor[j] == 0)
            {
                opp++;
            }
        }
        if (opp > ope)
            cout << opp <<endl;
        else
            cout << ope <<endl;
        ope = 0;
        opp = 0;
    }
    return 0;
}