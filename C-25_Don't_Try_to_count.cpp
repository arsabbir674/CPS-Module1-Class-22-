#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int operations = 0;
        bool found = false;

        while(x.size() <= 100) // safe limit
        {
            if(x.find(s) != string::npos)
            {
                found = true;
                break;
            }

            x += x;
            operations++;
        }

        if(found)
            cout << operations << endl;
        else
            cout << -1 << endl;
    }
}