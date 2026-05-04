#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1633/A
int main()
{
   int t;
   cin >> t;
   // Idea:
// First, we make the number a multiple of 10 by removing its last digit.
// Then we try all possible last digits (0 to 9).
// Among these 10 numbers, at least one will be divisible by 7.
// So we check each and print the one divisible by 7.
   while(t--)
   {
     int n;
    cin >> n;
    if(n%7==0)
    {
        cout<< n << endl;
    }

   else
   {
      n= n/10;
     n= n*10;
     // Make number ending with 0, then try last digit 0-9.
// One of them must be divisible by 7.
     for(int i=1 ;i<=9 ;i++)
     { 
        if(n%7==0)
        {  cout << n << endl;
            break;

        }
        n++;
     }
   }
   }
}