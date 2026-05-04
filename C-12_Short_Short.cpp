#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1873/A
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
  string st;
  cin >> st;
  if(st[1] =='c' && st[2] =='a')
  {
    cout<< "NO" << endl;
  }
 
  else if(st[1] =='a' && st[0] =='c')
  {
    cout<< "NO" << endl;
  }
  else
  {
    cout<< "YES" << endl;
 
  }
    }
 
}