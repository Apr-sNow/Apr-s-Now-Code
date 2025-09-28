#include <iostream>
using namespace std;
int primj(int wait)
{
    for(int p = 3; p < 10000; p += 2)
    {
        if(wait == 2)
            return 1;
        if(wait % p == 0 && wait != p)
        {
            return 0;
        }
        else if(p > wait)
        {
            break;
        }
    }
    return 1;
}
int main()
{
    int sum = 0;
    int lim;
    int prime[10000]={0};
    int count = 0;
    cin >> lim;
    if(lim == 1)
    {
        cout << 0;
        return 0;
    }
    if(primj(2) == 1)
    {
        prime[count] = 2;
        count ++;
        sum +=2;
    }
    for(int i = 3;  ;i+=2)
    {
        if(primj(i) == 1)
        {
            if(sum+i <= lim)
            {
                prime[count] = i;
                count++;
                sum += i;
            }
            else
                break;
        }
    }
    for(int i = 0; i < count; i++)
    {
        cout << prime[i]<<endl;
    }
    cout << count;
}