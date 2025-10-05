#include <bits/stdc++.h>
using namespace std;
string zip;
int zip7(int st)
{
    if(zip[st] == ']')  return st + 1;
    if(zip[st] == '[')
    {
        st++;
        int q = 0;
        int lp = 0;
        if(48 <= zip[st+1] && zip[st+1] <= 57){//11到17双位判断循环次数
            lp = 10 * (zip[st] - 48) + zip[st+1] - 48;
            st++;
        }
        else
            lp = zip[st] - 48;//////////////////////////
        for(int i = 0; i < lp; i++)
        {
            q = zip7(st+1);//进入方括号内的下一层递归
        }
        for(;65 <= zip[q] && zip[q] <= 90;q++)
        {
            cout << zip[q];
        }
        if(zip[q] == ']')  return q + 1;//本层递归的尾部处理
        if(zip[q] == '[')  zip7(q);
    }
    for(;65 <= zip[st] && zip[st] <= 90;st++)//本层递归的头部处理
    {
        cout << zip[st];///我以为它是顺序下去，在刚见到非字母字符时停下之前会再执行一次判断（实际上刚碰到就停了不会判断
    }
    if(zip[st] == ']')  return st + 1;//判定到方括回return到上一级递归
    if(zip[st] == '[')  zip7(st);
}
int main()
{
    cin >> zip;
    zip += "=========";//意义不明
    zip7(0);
}