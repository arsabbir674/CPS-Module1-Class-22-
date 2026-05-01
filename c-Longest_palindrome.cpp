#include<bits/stdc++.h>
using namespace std;
//https://atcoder.jp/contests/abc320/tasks/abc320_b
int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int length = 0;
    for(int left_Erase = 0 ;left_Erase<=n ;left_Erase++ )//left side e koto gula erase korbo
    {
        for(int right_Erase = 0 ;right_Erase<=n ;right_Erase++ )//right side e koto gula erase korbo
        {
            if(left_Erase+right_Erase>n)
            continue;//L-E + R_E length er boro hoye gele to ar erase korte parbo na

            //akhn palindrome check korbo erase baad diya
            int first_char = left_Erase;
            int last_char = n-right_Erase-1;
            bool palindrome = true;
            for(int x = 0 ;first_char+x <= last_char-x ;x++)
            {
                if(str[first_char+x] != str[last_char-x])
                palindrome = false;
            }
            if(palindrome)
            {
                 length = max(length,last_char-first_char+1);
            }
            
        }
    }

    cout << length << endl;

}
