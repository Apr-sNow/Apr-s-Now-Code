#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int box[10101];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> box[i];
    }
    int cnt = 0;
    int tmp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(box[j] > box[j+1])
            {
                tmp = box[j];   box[j] = box[j+1];  box[j+1] = tmp;
                cnt ++;    
            }
        }
    }
    cout << cnt;
}
