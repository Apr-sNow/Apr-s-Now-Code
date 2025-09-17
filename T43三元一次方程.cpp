#include <stdio.h>
int main(){
	int n;
	int f,t,w = 1;
	int count = 0;
	scanf("%d\n",&n);
	int e = n-8;
	for(int i=e/5;i>=0;i--){
		for(int j=(e-5*i)/2;j>=0;j--){
			printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i+1,j+1,1+e-5*i-2*j,e-4*i-j+3);
			count ++;
		}
	}
	printf("count = %d",count);
	return 0;
} 
