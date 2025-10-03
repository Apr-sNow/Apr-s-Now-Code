#include <bits/stdc++.h>
using namespace std;
bool cmp(string A, string B) {
    return A + B > B + A;
}
int main() {
    string list[27];
    int n;
	cin >> n;
	for (int i = 0; i < n; i++)
    {
	    cin >> list[i];
    }
        sort(list, list + n, cmp);
	for (int i = 0; i < n; i ++)
    {
		cout << list[i];
    }
    return 0;
}
