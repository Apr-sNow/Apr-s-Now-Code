#include <bits/stdc++.h>
using namespace std;
int tmp;
int maxn = 114514;
void prep(int siz,vector<int>& vec)
{
    for(int i = 0; i < siz; i++) 
    {
        cin >> tmp;
        vec.push_back(tmp);
    }
}
int calq(int siz,vector<int>& vec,int hei,int l,int r)
{
    if(hei < siz)
    {
        calq(siz,vec,hei+1,l+vec[hei],r);
        calq(siz,vec,hei+1,l,r+vec[hei]);
    }
    if(hei == siz){
        maxn = min(maxn,max(l,r));
        return 0;
    }
    return 0;
}
int main()
{
    int s1,s2,s3,s4;

    vector<int> a,b,c,d;
    cin >> s1 >> s2 >> s3 >> s4;
    prep(s1,a);
    prep(s2,b);
    prep(s3,c);
    prep(s4,d); 
    //其实也还是那种二叉树，考虑每一步放在左右的更大值
    maxn = 114514;
    int sum = 0;
    calq(s1,a,0,0,0);   sum += maxn;    maxn = 114514;
    calq(s2,b,0,0,0);   sum += maxn;    maxn = 114514;
    calq(s3,c,0,0,0);   sum += maxn;    maxn = 114514;
    calq(s4,d,0,0,0);   sum += maxn;    maxn = 114514;
    cout << sum;
}