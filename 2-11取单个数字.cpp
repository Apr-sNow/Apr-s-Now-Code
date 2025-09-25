#include <stdio.h>
int main()
{
    int yr,n;
    int yl[5];
    for (int i=0;i<5;i++)
		yl[i] = 0; 
    int cnt[11];
    for (int i=0;i<11;i++)
		cnt[i] = 0; 
    int ag = 0;

    scanf("%d %d",&yr,&n);
    //处理年份。取最好写的处理方式
    for (;;ag++)
    {//写增年和岁，
        yl[3] = yr % 10;
        yl[2] = (yr/10) % 10;
        yl[1] = (yr/100) % 10;
        yl[0] = (yr/1000) % 10;

        for (int c = 0; c < 4; c++)//计算实际n
        {
           for (int i = 0; i < 10; i++)
            {//cnt 是计数排序组
               if (i == yl[c])
                {
                    cnt[i]++;
                    break;
                }
            }
        }
 
        for (int cnt_11 = 0; cnt_11 < 10; cnt_11++)
        {//计数排序计数
            if (cnt[cnt_11] != 0)
            {
                cnt[11] ++;
            }
        }

        if (n == cnt[11])//判断并输出
        {
            printf("%d %d",ag,yr);
            return 0;
        }

        ++yr;
    }
    
    return 0;
}