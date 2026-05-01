#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/2009/A
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
         int result = 10000;
        for(int c = a ; c<=b ;c++)
        {
            int new_result = (c-a)+(b-c);
            result = min(result,new_result);




        }
        cout << result << endl;
    }
}
