#ifndef ROOMS_H
#define ROOMS_H
#include<iostream>
using namespace std;


class Rooms
{
    protected :
        int TV ;
        int sofra ;
        int window ;
        int table ;
        int toilet;
        int chair ;
        int door;
        int fridge;
        int bed ;
        string  color;
        int space ;

    public:
        Rooms();
        void add(int b , int c ,string  co , int d , int f , int so , int sp , int ta , int to , int tv , int w );
        void display() ;


        virtual ~Rooms();

    protected:


};

#endif // ROOMS_H
