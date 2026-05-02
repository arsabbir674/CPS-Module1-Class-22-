#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int n = str.size();

        bool is_Ok = false;

        for(int A = 0; A <= 1; A++)
        {
            for(int B = 0; B <= 1; B++)
            {
                for(int C = 0; C <= 1; C++)
                {
                    int open = 0, close = 0;
                    bool isValid = true;

                    for(int i = 0; i < n; i++)
                    {
                        if(str[i] == 'A')
                        {
                            if(A == 0) open++;
                            else close++;
                        }
                        if(str[i] == 'B')
                        {
                            if(B == 0) open++;
                            else close++;
                        }
                        if(str[i] == 'C')
                        {
                            if(C == 0) open++;
                            else close++;
                        }

                        if(open < close)
                        {
                            isValid = false;
                            break;
                        }
                    }

                    if(open != close) isValid = false;

                    if(isValid)
                    {
                        is_Ok = true;
                        break;
                    }
                }
            }
        }

        cout << (is_Ok ? "YES\n" : "NO\n");
    }
}