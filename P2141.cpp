#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    int list[114];
    int pls[114] = {0};
    int yes = 0;
    for(int i = 0 ; i < n; i++)
    {
        cin >> list[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            for(int k = 0; k < n ; k++)
            {
                if(list[i]+list[j] == list[k])
                {
                    for(int l = 0; l < count; l++)
                    {   
                        if(list[k] == pls[l])
                        {
                            yes = 1;
                            break;
                        }
                    }
                    if(yes == 0)
                    {
                        pls[count] = list[k];
                        count ++;
                    }
                }
                yes = 0;
            }
        }
    }
    cout << count <<endl;
    return 0;
}