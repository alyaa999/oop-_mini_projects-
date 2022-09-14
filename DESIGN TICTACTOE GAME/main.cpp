#include <iostream>
#include "board.h"
using namespace std;
 
int main()
{
    int t ;
    board Board ;
    cin>>t;
    bool ok =0;
    while(t--) {
        int x, y ;
        cin>>x>>y;
        try {
             if(x <  0 or  y < 0 or x > 2 or y > 2)
                throw "invalid constrains";
 
        }
        catch (const char * msg)
        {
            cout << msg  <<'\n';
            continue;
        }
 
 
        try {
            if((x == 0  && y == 0) && (Board.check_all_draw() == true)) {
                Board.clear_board();
                Board.Set_Move( 0, 0, 0);
                ok =0;
            } else if (Board.check_all_draw()==true) {
                throw "GameEndException";
        } else {
 
            Board.Set_Move( ok, x, y);
                if(Board.Winner() == 0  || Board.Winner()==1) {
                    if(Board.Winner() == 0)
                        cout <<"x player wins!";
                    else cout << "y player wins!";
                    cout <<'\n';
                    Board.set_all_draw_true();
                }
 
 
            }
 
 
        } catch (const char * msg) {
            cout << msg <<'\n';
        }
        ok =!ok ;
 
    }
}
