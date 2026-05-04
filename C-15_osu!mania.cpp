#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/2009/B

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
    cin >> n;

    char matrix[n][4];

    for(int row = 0; row < n; row++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> matrix[row][j];
        }
    }

    for(int i = n-1; i >= 0; i--)
    {
        for(int j = 0; j < 4; j++)
        {
            if(matrix[i][j] == '#')
            {
                cout << j+1 << " ";
            }
        }
    }

    cout << endl;
}
}