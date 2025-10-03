#include<stdio.h> 
int main() {
	int n,caipiao[7]={0},mine[7]={0},jiang[7]={0},right=0;
	scanf("%d", &n);
	for(int i=0;i<7;i++) scanf("%d", &caipiao[i]);
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<7;j++) scanf("%d", &mine[j]);
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<7;j++) {
			for(int k=0;k<7;k++) {
			    if(caipiao[k]==mine[j]) {
				right++;
			    int x = 7-right;///
				jiang[x]++;
			    }
			}	
		}
	}
	for(int i=0;i<7;i++) printf("%d ", jiang[i]);
	return 0;
}