#include <bits/stdc++.h>
using namespace std;
int n;
struct k{
    string vote;
    int cnt;
}vot[28];//要用上数组索引，正常序索引
bool cmd(k A,k B)        
{
    int a = B.vote.length(); int b = A.vote.length();
    if (a < b)  return true;
    if (a == b)
    {
        for(int q = 0; q < a; q++)
        {
            if(A.vote[q] > B.vote[q])
            {
                return true;
            }
            if(A.vote[q] < B.vote[q])
            {
                return false;
            }
        }
    }
    return false;
}
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> vot[i].vote;
        vot[i].cnt = i + 1;
    }
    sort(vot, vot + n, cmd);
    cout << vot[0].cnt << endl << vot[0].vote;
}