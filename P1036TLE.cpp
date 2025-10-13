#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n,k;
int lis[27] = {0};
int tsum = 0;
int cnt = 0;
int slcnt = 0;
bool isPrime(int wait)
{   
    if(wait == 1)   return false;
    for(int p = 2; p*p <= wait; p++)
    {
        if(wait % p == 0 && wait != p)
            return false;
    }
    return true;
}
void view(int deps)//目前和？
{
    if(slcnt == k)
    {
        // cout << tsum << endl;
        if(isPrime(tsum))   cnt ++;
        return;
    }
    if(deps < n)
    {
        tsum += lis[deps];  slcnt ++;
        view(deps+1);
        tsum -= lis[deps];  slcnt --;
        view(deps+1);
    }
    return;
}
signed main()
{   
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> lis[i];
    }
    view(0);
    cout << cnt;
}