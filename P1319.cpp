#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int zip;
    int count = 0;
    int count2 = 0;
    int list[60600];
    for(int i = 0 ; i < 60600 ; i++)
    {
        list[i] = -1;
    }
    for(;count2 < n*n;)//input
    {   
        cin >> zip;
        for(int i = 0; i < zip; i++)
        {
            list[count2] = 0;
            count2++;
        }
        if(count2 < n*n)
        {
            cin >> zip;
            for(int i = 0; i < zip; i++)
            {
                list[count2] = 1;
                count2++;
            }
        }
    }



    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout << list[count];
            count ++;
        }
        cout << endl;
    }
    return 0;
}