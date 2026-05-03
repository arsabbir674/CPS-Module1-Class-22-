#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1772/B
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int matrix[2][2];
    for(int i=0 ;i<2 ;i++)
    {
        for(int j=0 ;j<2 ;j++)
        {
            cin >> matrix[i][j];
        }
    }
     
  
      bool isBeautiful = false;
      int rotate = 4;
      while(rotate--)
      {
        if(matrix[0][0] < matrix[0][1]  && matrix[1][0] < matrix[1][1]  && matrix[0][0] < matrix[1][0]  && matrix[0][1] < matrix[1][1])
        {
            isBeautiful = true;
            break;

        }
        
       int temp1 = matrix[0][0];
        int temp2 = matrix[0][1];
        int temp3 = matrix[1][1];
        int temp4 = matrix[1][0];

        matrix[0][0] = temp4;
        matrix[0][1] = temp1;
        matrix[1][1] = temp2;
        matrix[1][0] = temp3;
    }
    if(isBeautiful)
    {
        cout << "YES" << endl;
    }
    else 
    {
       cout << "NO" << endl; 
    }
    }

}