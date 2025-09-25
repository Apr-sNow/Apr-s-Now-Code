#include <stdio.h>
#include <string.h>
//
int wl (char e,int wwl)
{
    if (e == 'C' && wwl == 0)
        printf("Bu\n");
    else if(e == 'C' && wwl == 1)
        printf("JianDao\n");
    if (e == 'B' && wwl == 0)
        printf("JianDao\n");
    else if(e == 'B' && wwl == 1)
        printf("ChuiZi\n");
    if (e == 'J' && wwl == 0)
        printf("ChuiZi\n");
    else if(e == 'J' && wwl == 1)
        printf("Bu\n");
}
void perf (int* ranct,int* ct,char en,int ju)
{
    if (ju == 0)
    {
        wl (en,0);
    }
    else if(ju == 1)
    {
        wl (en,1);
        printf("w%d\n",*ct);
        *ct = 0;
        *ranct = *ranct +1;
    }
}//写随机数列表的重新索引
int count = 0;
int rancon = 0;
int main()
{
    int n;
    int list[15];
    for (int i = 0; i < 15; i++)//标记初始化
    {
        list [i] = -1;
    }
        scanf ("%d",&n);
    for (int i = 0; i < n; i++)//
    {
        scanf("%d",&list[i]);
    }

    //判断输赢+判断赢装(怎样调用)
    char ene[15];
    for (;;count ++)
    {   
        if (list[rancon] == -1)
            rancon = 0;
        scanf("%s",ene);
        if (ene[0] == 'E')/////////
            break;////  ///////////
        if (count == list[rancon])
            perf (&rancon,&count,ene[0],1);
        else if (count != list[rancon])
            perf (&rancon,&count,ene[0],0);
    }
}//第二种：在函数外放