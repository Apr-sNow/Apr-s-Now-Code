#include <stdio.h>
#include <string.h>
int main(){
	int n;
	int yes=0;
	int sum = 0;
	char num[20];
	char list[12] ={'1','0','X','9','8','7','6','5','4','3','2'};
	int bar[20] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	for(int i=0;i<20;i++)
		num[i]=0;
	scanf("%d\n",&n);
	
	for(int i=0;i<n;i++){
		sum = 0;
		for(int j=0;j<17;j++){
			scanf("%c",&num[j]);
			sum += bar[j]*(num[j]-'0');
		}
		scanf("%c\n",&num[17]);
		sum = sum % 11;
		if(list[sum] != num[17]){
			yes = 1;
			printf("%s\n",num);
		}
		
	}
	if(yes == 0)
		printf("All passed");
	return 0;
} 
