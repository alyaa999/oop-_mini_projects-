#include "board.h"
#include <iostream>
using namespace std;


board::board()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            model[i][j]='.';
            all_draw =false;
}

void board::Set_Move(bool player, int x,int y)
{
    try {

        if(model[x][y]!='.') {
            throw  "AlreadyTakenException";
        }
        else
        {
            if(player == 0)model[x][y]='x';
            else model[x][y]='o';
        }
    }

    catch (const char * msg) {
        cout << msg <<'\n';
    }
    bool ok =true;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(model[i][j]=='.')
            ok =false;
        }
    }
    if(ok)
    {
        all_draw =true;
        cout << "it's a draw" <<'\n';

    }
}
int board::Winner()
{

    if(model[0][0]== model[1][1]&& model[1][1]==model[2][2]) //d
    {
        if(model[0][0]=='x' && model[0][0]!= '.')return 0;
        else if(model[0][0]!='.') return 1 ;
    }
    else if(model[0][2] ==model[1][1]&& model[1][1]==model[2][0])//d2
    {
         if(model[0][2]=='x' && model[0][2]!= '.')return 0;
        else if(model[0][2]!='.') return 1 ;
    }
    else if(model[0][0]==model[1][0]&& model[1][0]==model[2][0]) //v
    {
         if(model[0][0]=='x' && model[0][0]!= '.')return 0;
        else if(model[0][0]!='.')return 1 ;

    }
    else if(model[0][1]==model[1][1]&& model[2][1]==model[1][1])//v
    {
        if(model[0][1]=='x' && model[0][1]!= '.')return 0;
        else if(model[0][1]!='.') return 1 ;
    }
    else if(model[0][2]==model[1][2]&&model[1][2]==model[2][2])//v
    {
         if(model[0][2]=='x' && model[0][2]!= '.')return 0;
        else if(model[0][2]!='.') return 1 ;
    }
    else if(model[0][0]==model[0][1]&&model[0][1]==model[0][2])//h
    {
         if(model[0][0]=='x' && model[0][0]!= '.')return 0;
        else if(model[0][0]!='.') return 1 ;
    }
    else if(model[1][0]==model[1][1]&&model[1][1]==model[1][2])//h
    {
         if(model[1][0]=='x' && model[1][0]!='.')return 0;
        else if(model[1][0]!='.') return 1 ;
    }
    else if(model[2][0]==model[2][1]&&model[2][1]==model[2][2])//h
    {
         if(model[2][0]=='x'&& model[2][0]!= '.')return 0;
        else if(model [2][0]!= '.') return 1 ;
    }
    return -1;
}

void board:: clear_board()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            model[i][j]='.';
             all_draw =false;
}
bool board::check_all_draw()
{
    return all_draw;
}
void board:: set_all_draw_true ()
{
    all_draw =true;
}
board::~board()
{
    //dtor
}
