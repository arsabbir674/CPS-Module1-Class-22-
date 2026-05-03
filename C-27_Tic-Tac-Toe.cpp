#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1846/B
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
     char grid[3][4];
    for(int i=0 ;i<3 ;i++)
    {
        cin >> grid[i];

    }
    bool got_winner = false;

    //let (1= +) ; (2 = O) ; (3=X)

    for(int winner = 1 ; winner<=3 ; winner++)
    {
        char s = '+';
        if(winner == 2 ) s = 'O';
        else if (winner == 3 ) s = 'X';
        bool can_win = false;

        for(int row = 0 ; row<3 ;row++)
        {
            if( grid[row][0] == s && grid[row][1] == s && grid[row][2] == s )can_win = true;
        }

         for(int colm = 0 ; colm<3 ;colm++)
        {
            if( grid[0][colm]== s && grid[1][colm]== s && grid[2][colm]== s  )can_win = true;
        }

        if(grid[0][0]==s && grid[1][1]==s && grid[2][2]==s)can_win = true;
         else if(grid[2][0]==s && grid[1][1]==s && grid[0][2]==s)can_win = true;

         if(can_win)
         {
            got_winner = true;
            cout << s << endl;
            break;
         }

    }

     if (got_winner == false) {
            cout << "DRAW" << endl;
     }

   }
}