#include <iostream>
using namespace std;
int main()
{
    int t=0;
    int n=0;
    int arra[10];
    int zr = 0;
    int on = 0;
    int fu = 0;
    int ans = 0;
    cin >> t;
    for (int i = 0 ; i < t; i++){
        cin>> n;
        for(int j=0;j < n; j++)
        {
            cin >> arra[j];
            if (arra[j] == 0)
                zr++;
            if (arra[j] == 1)
                on++;
            if (arra[j] == -1)
                fu++;
        }
        ans += zr;
        if(fu%2 == 1)
            ans += 2;
        cout << ans <<endl;
        ans = 0;
        zr = 0;
        on = 0;
        fu = 0;
    }
    return 0;
}