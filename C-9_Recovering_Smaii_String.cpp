#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1931/A
int main()
{
   int t;
   cin >> t;

   while(t--)
   {
       int n;
       cin >> n;

       bool found = false;

       for(char f = 'a'; f <= 'z' && !found; f++)
       {
           for(char s = 'a'; s <= 'z' && !found; s++)
           {
               for(char th = 'a'; th <= 'z'; th++)
               {
                   int first_value = f - 'a' + 1;
                   int second_value = s - 'a' + 1;
                   int third_value = th - 'a' + 1;

                   if(first_value + second_value + third_value == n)
                   {
                       cout << f << s << th << endl; 
                       found = true;
                       break;
                   }
               }
           }
       }
   }
}