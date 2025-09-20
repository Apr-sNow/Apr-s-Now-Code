#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    string pcd = "0";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str >> endl;
        if (strlen(str) > strlen(pcd))
        {
            pcd = str;
        }
    }
    cout <<"The longest is: "<<pcd;
}