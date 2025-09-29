#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string doc;
    string temp;
    getline(cin,temp);
    doc += temp;
    int n;
    n = temp.length();
    cout << n << ' ';
    for(int i = 0; i < n-1 ; i++)
    {
        getline(cin,temp);
        doc += temp;
    }
    int count = 1;
    char tmp = doc[0];
    if(tmp == '1')
    {
        cout<<"0 ";
    }
    for(int i = 1; i < n*n ; i++)
    {   
        if(tmp == doc[i])
        {
            count++;
        }
        else
        {
            tmp = doc[i];
            cout << count<<' ';
            count = 1;
        }

    }
    cout<<count<<' ';
    return 0;
}