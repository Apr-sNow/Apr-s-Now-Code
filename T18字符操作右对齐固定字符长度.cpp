#include <stdio.h>
int main(){
	int a,b;
	float c;
	scanf("%d %d",&a,&b);
	if (a > b)
		printf("Invalid.");
	else {
		printf("fahr celsius\n");
		for(int i = a;i<=b;i+=2){
			c = 5*(i-32.0)/9;
			printf("%d%6.1f\n",i,c);
		}
	}
} 
