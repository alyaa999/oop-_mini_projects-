#ifndef BOARD_H
#define BOARD_H
#include <iostream>
using namespace std;


class board
{
protected :
    char model[3][3];
    bool all_draw ;


    public:
        board();
        void Set_Move(bool player , int x , int y );
        int  Winner();
        void clear_board();
        virtual ~board();
        void set_all_draw_true();
        bool check_all_draw();
};

#endif // BOARD_H
