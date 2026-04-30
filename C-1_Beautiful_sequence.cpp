#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
    cin >> n;
    int A[n];
    for(int i=1 ;i<=n ;i++)
    {
        cin >> A[i];
    }
  int flag = 1;
     for(int i=1 ;i<=n ;i++)
    {
       if(i == A[i]  || A[i] <i)
       {
        //cout << "YES" << endl;
        flag = 0;
       }
    }
    if(flag == 1)
     cout << "NO" << endl;
     if(flag == 0)
     cout << "YES" << endl;
   }

}