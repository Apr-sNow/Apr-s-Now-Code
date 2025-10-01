#include <bits/stdc++.h>
using namespace std;
int show[444][27];
int cntLst[27];
int main()
{
    string line;
    for(int i = 0; i < 4; i++)
    {
        getline(cin,line);
        for(int q = 0; q < line.length(); q++)
        {
            if(65 <= line[q] && line[q] <= 90)
            {
                cntLst[line[q]-65]++;
            }
        }
    }
    // for(int i = 0; i < 27; i++)
    //     cout << cntLst[i];
    int maxn = 0;
    for(int i = 0; i < 26; i++)
    {   
        if(maxn < cntLst[i])    maxn = cntLst[i];
        for(int j = 0; j < cntLst[i]; j++)
        {
            show[j][i]=1;
        }
    }
    while(maxn)
    {
        for(int i = 0; i < 25; i++)
        {
            if(show[maxn-1][i] == 0)    cout << "  ";
            if(show[maxn-1][i] == 1)    cout << "* ";
        }
        if(show[maxn-1][25] == 0)   cout << " " <<endl;
        if(show[maxn-1][25] == 1)   cout << "*" <<endl;
        --maxn;
    }
    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
    return 0;
}