#include <iostream>
using namespace std;
int main()
{
    int n = 0,k = 0;
    int lisn[127];
    for (int i = 0; i <127; i++)
        lisn[i] = 0;
    cin >> n;
    for (int i= 0; i < n; i++)
    {
        cin >> lisn[i];
    }
    cin >> k;
    int tmp = 0;
    int que = 0;
    for (int j = 0; j < k; j++)
    {
        for (int i = 0 ; i < n; i++)
        {
            cin>> tmp;
            if(tmp == 0)
            {
                int fw = 1;
            }
            else if(tmp != lisn[i])
            {
                que = -114514;//原为赋值-1
                // break;
            }
            else if(tmp == lisn[i])
            {
                que++;//原为赋值1
            }
            
        }
        if(que <= 0)
        {
            que = 0;
            cout <<"Ai Ya";
        }
        else if(que > 0)
        {   
            que = 0;
            cout <<"Da Jiang!!!";
        }
        if(j != k-1)
            cout <<endl;
    }
    return 0;
}