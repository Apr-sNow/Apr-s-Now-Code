#include <iostream>
using namespace std;
int prime(int wait)
{
    if(wait == 2) return 1;
    if(wait == 1) return 0;
    for(int p = 2 ; p*p <= wait ; p++)
    {
        if(wait % p == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    int num;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if(prime(num) == 1) 
            cout << num <<' ';
    }
    return 0;
}