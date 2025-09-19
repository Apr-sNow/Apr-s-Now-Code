#include <stdio.h> 
int main(){
	int n;
    int temp;
	int lis[12];
    for (int i = 0;i < 12;i++)//此处不初始化也没事了，只要数组超限访问
        lis[i] = 0;
	scanf("%d\n",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&lis[i]);
	}

	for(int i = 0;i < n;i++)//实现从头检测比较n轮
	{
		for(int j = 0;j < n-1;j++)//交换式,交换n-1轮
        {
            if(lis[j] < lis[j+1])
            {
                temp = lis[j+1];
                lis[j+1] = lis[j];
                lis[j] = temp;
            }
        }
	}

    for(int i = 0;i < n;i++)
    {
        printf("%d",lis[i]);
		if(i == n-1)
			break;
		printf(" ");
    }
	return 0;
}
