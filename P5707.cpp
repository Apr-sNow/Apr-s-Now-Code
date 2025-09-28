#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    int v;
    cin >> s >> v;
    int delay = 10 + int(ceil(float(s)/v));
    int h = delay / 60;
    int m = delay % 60;
    if(h >= 8)
    	h = h-24;
    if (m == 0)
        cout <<setw(2) << setfill('0')<<8-h<<':'<<"00"<<endl;
    else 
        cout <<setw(2) << setfill('0')<<8-h-1<<':'<<setw(2) << setfill('0')<<60 - m<<endl;
    return 0;
}