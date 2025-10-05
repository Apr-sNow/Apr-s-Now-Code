#include <bits/stdc++.h>
using namespace std;
int zindex = 0;
// int dindex = 0;
int lns;
string zip;
int flr = 0;
// string doc;
int  zip_7(int st)
{
    for(;65 <= zip[st] && zip[st] <= 90;st++)
    {
        if(zip[st] == ']')  return st;
        cout << zip[st];
    }
    if('[' == zip[st]                )  
    {
        flr ++;
        zip_7(st+1);//
    }
    if(48 <= zip[st] && zip[st] <= 57)
    {
        int q = 0;
        int lp = 0;
        if(48 <= zip[st+1] && zip[st+1] <= 57){
            lp = 10 * (zip[st] - 48) + zip[st+1] - 48;
            st++;
        }
        else
            lp = zip[st] - 48;

        for(int i = 0; i < lp; i++)
        {
            q = zip_7(st+1);//
        }
        if(q < lns){
            zip_7(q + 1);
            return q+1;
        }
        else   
            return 0;
        flr --;

    }
    return 0;
}
int main()
{
    cin >> zip;
    lns = zip.length();
    zip_7(zindex);
}