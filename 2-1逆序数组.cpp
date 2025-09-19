#include <stdio.h> 
int main(){
	int n;
	int lis[12];
	scanf("%d\n",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&lis[i]);
	}
	for(int i = n-1;i >= 0;i--)
	{
		printf("%d",lis[i]);
		if(i == 0)
			break;
		printf(" ");
	}
	return 0;
}
