#include <iostream>
using namespace std;
int a,b;
void prime(int wait)
{
    for(int i = 3; i < 1000000; i+=2)
    {
        if(wait % i == 0 && wait > i)
            return;
        else if(wait <= i)
            break;
    }
    if(a <= wait && wait <= b)
    {
    cout << wait<<endl;
    }
}
int pa;
int main()
{

    cin >> a >> b;
    prime(5);
    prime(7);
    prime(11);
    for(int p1 = 1; p1 <= 9 ; p1+=2)
    {
        for(int p2 = 0; p2 <= 9 ; p2++)
        {
            pa = 100* p1 + 10*p2+ p1;
            prime(pa);
        }
    }
    for(int p1 = 1; p1 <= 9 ; p1+=2)
    {
        for(int p2 = 0; p2 <= 9 ; p2++)
        {
            for(int p3 = 0; p3 <= 9 ; p3++)
            {
                pa = 10000* p1 + 1000*p2 + 100* p3 + 10*p2 + p1;
                prime(pa);
            }
        }
    }
    for(int p1 = 1; p1 <= 9 ; p1+=2)
    {
        for(int p2 = 0; p2 <= 9 ; p2++)
        {
            for(int p3 = 0; p3 <= 9 ; p3++)
            {
                for(int p4 = 0; p4 <= 9 ; p4++)
                {
                    pa=1000000*p1+100000*p2+10000*p3+1000*p4+100*p3+10*p2+p1;
                    prime(pa);
                }
            }
        }
    }
    

    return 0;
}