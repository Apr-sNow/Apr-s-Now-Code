#include <iostream>
using namespace std;
int prime(int wait)
{
    for(int p = 3; p < 50000; p+=2)
    {   
        if(wait == 2)
            return 1;
        if(wait % p == 0 && wait != p)
        {
            return 0;
        }
        if(wait < p)
            break;
    }
    return 1;
}
int main()//1 2 3jud
{
    int n;
    int p,q;
    cin >> n;
    if(n == 1)
    {
        cout <<'1';
        return 0;
    }
    if(n == 2)
    {
        cout <<'2';
        return 0;
    }
    if(n == 3)
    {
        cout << '3';
        return 0;
    }
    for (int i = 2; i*i < n; i++)
    {
        if(prime(i) == 1)
        {
            if(n % i == 0)
            {
                if(prime(n/i) == 1)
                {
                    cout << n/i;
                }
            }
        }
    }

}