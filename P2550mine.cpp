#include <stdio.h>
int main()
{
    int cp[10];
    int mine[1145]/*彩票数量*/[10];
    int prise[10];
    int n;
    int right = 0;
    scanf("%d",&n);
    for(int i = 0; i < 7; i++)  scanf("%d",&cp[i]);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            scanf("%d",&mine[i][j]);
        }

        for(int j = 0; j < 7; j++)
        {
            for(int k = 0; k < 7; k++)
            {
                if(cp[k] == mine[i][j])
                {
                    right ++;
                }
            }
        }
        prise[7-right]++;
        right = 0;
    }
    for(int i = 0; i < 7; i++)  printf("%d ",prise[i]);
    
}