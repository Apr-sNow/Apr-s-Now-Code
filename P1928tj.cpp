#include<bits/stdc++.h>
using namespace std;
string zip7(){
    int cnt;
    char site;
    string ans = "";
    string str = "";
	while(cin >> site){
		if(site == '[')
        {
			cin >> cnt;
			str = zip7();
			for(int i = 0; i < cnt; i++)
            {
				ans += str;
			}
		}
		else if(site == ']')    return ans;
		else                ans += site;
		
	}
    return ans;
}//你的意思是，处理尾部就像这样？
int main(){
	cout<<zip7();
}