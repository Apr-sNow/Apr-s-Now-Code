#include <stdio.h>
#include <string.h>
int main()
{
    int countpcd = 0;
    int bowol = 0;
    char str[84];
        for (int i = 0; i < 84; i++)
            str[i] = '-';
    char pcd[81];
        for (int i = 0; i < 81; i++)
            pcd[i] = '\0';
    for (int i = 0; i < 84; i++)
    {
        str[i] = getchar();
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    for (int i = 0; i < strlen(str);i++)
    {//记得检查strl是不是读取对的
        for (int j = 0; j < strlen(pcd); j++)
        {
            if (str[i] == pcd[j])
            {
                bowol = 1;
                break;
            }

        }
        if(bowol == 1)
        {
            bowol = 0;
            continue;
        }
        pcd[countpcd] = str[i];
        ++countpcd;
    }//写成函数是否更好？不好连续break两次要写判断
    //而且像这种，j离开for就掉了要写判断变量

    int temp;
    for (int i = 0; i < strlen(pcd); i++)
    {
        for(int j = 0; j < strlen(pcd)-1; j++)
        {
            if(pcd[j] > pcd[j+1])
            {
                temp = pcd[j];
                pcd[j] = pcd[j+1];
                pcd[j+1] = temp;
            }
        }
    }
    printf("%s",pcd);
    return 0;
}