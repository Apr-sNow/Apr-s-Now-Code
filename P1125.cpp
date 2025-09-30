#include <bits/stdc++.h>
using namespace std;
bool prim(int wait)
{
    if(wait == 2)   return true;
    if(wait == 1)   return false;
    for(int p = 2; p < 114 ; p++)
    {
        if(wait % p == 0 && wait != p)
            return false;
    }
    return true;
}
int main()
{
    int cnt[27] = {0};
    string word;
    int lns = 0;
    cin >> word;
    lns = word.length();
    for(int i = 0; i < lns; i++)
    {
        cnt[word[i]-97]++;
    }
    // for(int i = 0; i < 27; i++)
    // {
    //     cout << cnt[i];
    // }测试ASCII程序
    int low = 114, high = 0;
    for(int i = 0; i < 26; i++)
    {
        if(cnt[i] < low && cnt[i] != 0)    low = cnt[i];
        if(cnt[i] > high)   high = cnt[i];
    }
    if(prim(high - low))
    {
        cout << "Lucky Word" << endl << high - low;
    }
    else
        cout << "No Answer" << endl << '0';
}