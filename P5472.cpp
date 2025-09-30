#include <bits/stdc++.h>
using namespace std;
struct a
{
    int a,u,v;
}b[1145];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> b[i].a >> b[i].u >> b[i].v;
        if(b[i].u+b[i].v > 140
        && b[i].u*7 + b[i].v*3 >= 800)
        {
            cout << "Excellent"<<endl;
        }
        else
        {
            cout << "Not excellent" << endl;
        }
    }
    return 0;
}