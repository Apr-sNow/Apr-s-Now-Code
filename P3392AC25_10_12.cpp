#include <bits/stdc++.h>
using namespace std;
int N,M;
int mino = 11451481;
int temp[55][3];//W B R
string line;
int fos(int up,int dw)
{
    int sum = 0;
    for(int w = 0; w < up; w++)     sum += (M - temp[w][0]);
    // cout << sum << 'w' << endl;
    for(int b = up; b <= dw; b++)   sum += (M - temp[b][1]);
    // cout << sum << 'b' << endl;
    for(int r = dw + 1; r < N; r++) sum += (M - temp[r][2]);
    // cout << sum << 'r' << endl;
    return sum;
}
int main()
{
    cin >> N >> M;
    char rd;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> rd;
            if(rd == 'W')  temp[i][0] ++;
            if(rd == 'B')  temp[i][1] ++;
            if(rd == 'R')  temp[i][2] ++;
        }

    }
    for(int i = 1; i < N - 1; i++)
    {
        // for(int j = N - 2; j >= i; j--)//正手教学
        // {
        //     mino = min(fos(i,j),mino);
        // }
        for(int j = i; j < N - 1; j++)//反手教学
        {
            mino = min(fos(i,j),mino);
        }
    }
    cout << mino <<endl;
}