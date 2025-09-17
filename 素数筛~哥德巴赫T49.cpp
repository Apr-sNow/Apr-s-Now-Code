#include <stdio.h>
int main(){
	int n;
	int yes = 0; 
	int count = 0;
	scanf("%d",&n);
	int list[30] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113};
	for (int i = 0;i<30;i++){
		for(int j=0;j<30;j++){
			count++;
			if((n-list[i])%list[j] == 0 && (n-list[i])>list[j])
				break;
		}
		if(count == 29)
			printf("%d = %d + %d",n,list[i],n-list[i]);
		count = 0;
	}
	
}
