#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int n;
    int a,b;
    int list[114514] = {0};
    int cf[114514] = {0};
    while(true)
    {
        memset(list,0,sizeof(list));
        memset(cf  ,0,sizeof(cf)  );
        cin >> n;
        if(n == 0)  break;
        else 
        {
            for(int i = 1; i <= n; i++)
            {
                cin >> a >> b;
                cf[a] ++;   cf[b+1]--;
            }
            for(int i = 1; i <= n; i++)
            {
                list[i] = list[i-1] + cf[i];
            }
            for(int i = 1; i <= n; i++)  cout << list[i] << ' ';
            cout << endl;
        }
        

    }
    
}