#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int sti(string str)
{  
    if(str[0] == '-')
    {
        str[0] = '0';
    }
    int TmpLis[114] = {0};
    for(int s = 0; s < str.length() ; s++)
    {
        TmpLis[s] = str[s] - '0';
    }
    int TmpInt = 0;
    for(int s = 0; s < str.length() ; s++)
    {
        TmpInt += TmpLis[s] * pow(10,str.length()-s-1);
    }
    if(str[0] == '0')
        return -1 * TmpInt;
    return TmpInt;
}
int intlen(int num)///真该控制你了
{
    int cnt = 0;
    if(num == 0)
        return 1;
    if(num < 0){
        cnt++;  
        num *= -1;
    }
    while(num)
    {
        num /= 10;
        cnt++;
    }
    return cnt;
}
void kqlt(string tp,string a,string b)
{
    if(tp == "a")
        ans = sti(a) + sti(b);
    if(tp == "b")
        ans = sti(a) - sti(b);
    if(tp == "c")
        ans = sti(a) * sti(b);

}
int main()
{
    string typ,numA,numB,tmp;
    int n;
    cin >> n;
    // int ans = 0;
    for(int i = 0; i < n ; i++)
    {
        cin >> typ;
        if(typ != "a" && typ != "b" && typ != "c")
        {
            // cout << "qqq" <<endl;
            numA = typ; cin >> numB;  typ = tmp;
        }
        else
        {
            cin >> numA >> numB;    tmp = typ;
        }
        kqlt(typ,numA,numB);
        int anslen = intlen(ans);

        if(typ =="a")   typ = "+";
        if(typ =="b")   typ = "-";
        if(typ =="c")   typ = "*";
        cout << numA << typ << numB <<'='<<ans<<endl;
        ans = 0;
        cout << numA.length() + numB.length() + anslen + 2<<endl;
    }
    return 0;
}