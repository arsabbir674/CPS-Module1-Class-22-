#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/977/B
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string Answer = "";
    //Answer[2] ='\0';
    int max_Count = 0;
    for(char ch1='A' ; ch1<='Z' ;ch1++)
    {
       for(char ch2 ='A' ;ch2<='Z' ;ch2++)
       {
           int count =0;
           for(int i=0 ;i<n-1 ;i++)
           {
            if(str[i] == ch1 && str[i+1]== ch2 )
            count ++;

            
           }
           if(count>max_Count)
           {
            max_Count = count;
            Answer = "";
           Answer+=ch1;
           Answer+=ch2;
           }
       }
    }
    cout<< Answer << endl;

}