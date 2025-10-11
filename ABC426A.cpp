#include <bits/stdc++.h>
using namespace std;
int main()
{
    string X,Y;
    cin >> X >> Y;
    if(Y[0] == 'O') cout << "Yes";
    else if(Y[0] == 'S'){
        if(X[0] != 'O') cout << "Yes";
        else    cout << "No";
    }
    else{
        if(X[0] != 'L') cout << "No";
        else    cout <<  "Yes";
    }
}