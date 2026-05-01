#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1884/A
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, k;
        cin >> x >> k;

        for(int i = x; ; i++) // infinite loop but break hobe
        {
            int sum = 0, temp = i;

            while(temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }

            if(sum % k == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
