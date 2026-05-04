#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1941/A
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,k;
    cin >> n >> m >> k;
    int left[n];
    int right[m];
    for(int i=0;i<n ;i++)
    {
        cin >> left[i];
    }
     for(int j=0;j<m ;j++)
    {
        cin >> right[j];
    }
    int number_of_ways = 0;
    for(int i=0 ;i<n ;i++)
    {
        for(int j=0 ;j<m ;j++)
        {
              if(left[i] + right[j] <=k )
             number_of_ways++;
        }
    }
    cout << number_of_ways << endl;
    }
}