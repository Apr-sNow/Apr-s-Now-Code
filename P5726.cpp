#include <iostream>
using namespace std;
int main()
{
    int n;
    int score[1007];
    int minn= 100,maxn = -1;
    int sum = 0;
    float fin = 0.0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> score[i];
        sum += score[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(score[i]<minn){
            minn = score[i];
        }
        if(score[i]>maxn){
            maxn = score[i];
        }
    }
    fin = (sum-maxn-minn-0.0)/(n-2);
    printf("%.2f",fin);
}