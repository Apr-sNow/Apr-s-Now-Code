#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    char a,b;
    int  A = 0,B = 0;
    a = S[0];   b = '0';
    for(int i = 0; i < S.length(); i++)
    {
        if(a == S[i])   A++;
        else if(a != S[i])
        {
            b = S[i];
            B ++;
        }
    }
    if(A == 1)  cout << a;
    else        cout << b;
}