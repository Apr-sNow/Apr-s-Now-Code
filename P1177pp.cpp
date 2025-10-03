#include <bits/stdc++.h>
using namespace std;
int n;
void pp(int arr[])
{
    int tmp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];   arr[j] = arr[j+1];    arr[j+1] = tmp;
            }
        }
    }
}
int main()
{
    cin >> n;
    int list[100002];
    for(int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    pp(list);
    for(int i = 0; i < n; i++)
    {
        cout << list[i]<<' ';
    }
}