#include <bits/stdc++.h>
using namespace std;
int squ[1025][1025];
int n;
void pardon(int ankx,int anky,int siz,int trial)
{
    if(siz == 1 && trial == 1)   return;
    if(trial == 0)
    {
        for(int i = ankx; i < ankx + siz; i++)
        {
            for(int j = anky; j < anky + siz; j++)
            {
                squ[i][j] = 0;
            }
        }
        return;
    }
    else{
        pardon(ankx,                 anky,              siz/2, 0);
        pardon((2*ankx + siz)/2,     anky,              siz/2, 1);
        pardon(ankx,                (2*anky + siz)/2,   siz/2, 1);
        pardon((2*ankx + siz)/2,    (2*anky + siz)/2,   siz/2, 1);
    }
}
int main()
{
    cin >> n;
    n = pow(2,n);
    for(int i = 0; i <= n; i ++)
        for(int j = 0; j < n; j++)
            squ[i][j] = 1;
        
    pardon(0,0,n,1);
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++)
        {
            cout << squ[i][j] << ' ';
        }   
        cout << endl; 
    }
}