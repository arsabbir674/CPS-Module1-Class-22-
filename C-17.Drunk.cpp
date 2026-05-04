#include <bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/DRUNKALK

int main() {
int t;
cin >>t;
while(t--)
{
	int k;
	cin >> k;
	int position=0;
	for(int i=1 ;i<=k ;i++)
	{
	    if(i%2!=0) position+=3;
	    else position--;
	}
	cout<< position << endl;
	
}

}
