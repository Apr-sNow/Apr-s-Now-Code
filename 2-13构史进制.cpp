#include <stdio.h>
#include <math.h>
int main()
{
    long int nd = 0;
    long int numa,numb;
    scanf ("%ld",&nd);
    scanf ("%ld %ld",&numa,&numb);
    int ndl[50];
    int numal[50];
    int numbl[50];
    int ans[50];
    for (int i = 0; i < 50; i++)
    {
        ans[i] = 0;
    }
    for (int i = 0; i < 50; i++)
    {
        ndl[i] = 10;
    }


    for (int i = 0; i < 30; i++)
    {//取位数l
        ndl[i] = nd/((int)pow(10,i)) % 10;
        if (ndl[i] == 0)
        {
            ndl[i] = 10;
        }
        
    }

    for (int i = 0; i < 30; i++)
    {//取位数a
        numal[i] = numa/((int)pow(10,i)) % 10;
    }

    for (int i = 0; i < 30; i++)
    {//取位数b
        numbl[i] = numb/((int)pow(10,i)) % 10;
    }

    int buding = 0;
    for (int i = 0; i < 30; i++)
    {
        ans[i] += (buding + numal[i] + numbl[i]) % ndl[i];
        buding = (buding + numal[i] + numbl[i]) / ndl[i];
    }
    int qq = 0;
    for (int i = 30; i>=0;i--)
    {
        if(ans[i] != 0)
        {
            qq = 1;
            printf("%d",ans[i]);
        }
        if(ans[i] == 0 && qq == 1)
        {
            printf("0");
        }
    }
    printf("\n");
    return 0;

}