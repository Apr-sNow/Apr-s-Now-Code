#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
string a,b;
int la,lb,PJ=0,FJ;
int na[510],nb[510],nc[510],ifc[510];
int main(){
	cin>>a>>b;
	la=a.length(),lb=b.length();
	FJ=max(la,lb);
	for(int x=la-1,i=0;x>=0;x--,i++)/*字符串(变更：倒序)转数组*/ 
		na[x]=a[i]-48;
//	for(int i=0;i<FJ;i++)
//		cout<<na[i]<<" ";
//	cout<<endl;
	for(int y=lb-1,i=0;y>=0;y--,i++)
		nb[y]=b[i]-48;
//	for(int i=0;i<FJ;i++)
//		cout<<nb[i]<<" ";
//	cout<<endl;	
	for(;PJ<FJ;PJ++)//倒序相加 
		nc[PJ]=na[PJ]+nb[PJ];
//	for(int i=0;i<FJ;i++)//输出中间产物 
//		cout<<nc[i];
//	cout<<endl;
	for(int i=0;i<FJ;i++){
		nc[i+1]+=nc[i]/10;
		nc[i]=nc[i]%10;
	}
	//添加额外进位检测 
	if(nc[FJ])
		FJ++;
	for(int i=FJ-1;i>=0;i--)//颠倒，输出 
		cout<<nc[i];
	return 0;
}