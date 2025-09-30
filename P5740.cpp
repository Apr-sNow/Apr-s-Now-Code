#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int n;
struct Student{
	string name;
	int ch,ma,en;
	
}example={"example",-100,-100,-100};
struct Student a[1010];
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i].name>>a[i].ch>>a[i].ma>>a[i].en;
	for(int i=0;i<n;i++)
		if(a[i].ch+a[i].ma+a[i].en>example.ch+example.ma+example.en)
			example=a[i];
	cout<<example.name<<" "<<example.ch<<" "<<example.ma<<" "<<example.en<<endl;
	return 0;
}