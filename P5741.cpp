#include <bits/stdc++.h>
using namespace std;
struct Stu{
    string name;
    int yw,sx,yy,tt;
}a[1145];
bool ju(int num1,int num2,int sco)
{
    if(-1*sco <= num1 - num2 && num1 - num2 <= sco)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].yw >> a[i].sx >> a[i].yy;
        a[i].tt = a[i].yw + a[i].sx + a[i].yy;
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(ju(a[i].sx,a[j].sx,5)
            && ju(a[i].yw,a[j].yw,5)
            && ju(a[i].yy,a[j].yy,5)
            && ju(a[i].tt,a[j].tt,10))
            {
                cout << a[i].name << ' ' <<a[j].name <<endl;
            }
        }
    }
    return 0;
}