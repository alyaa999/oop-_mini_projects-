#include "Rooms.h"
#include<iostream>
using namespace std;

Rooms::Rooms()
{
    this->bed=0;
    this->chair=0;
    this->color= "";
    this->door=0;
    this->fridge=0;
    this->sofra=0;
    this->space=0;
    this->table=0;
    this->toilet=0;
    this->TV=0;
    this->window=0;
}
void Rooms:: add (int b, int c,string  co, int d, int f, int so, int sp, int ta, int to, int tv, int w )
{
    this->bed=b;
    this->chair=c;
    this->color= co;
    this->door=d;
    this->fridge=f;
    this->sofra=so;
    this->space=sp;
    this->table=ta;
    this->toilet=to;
    this->TV=tv;
    this->window=w;
}

Rooms::~Rooms()
{
    //dtor
}
void  Rooms :: display()
{
    cout << "number_of_tvs : " << this->TV <<'\n';
    cout<< "number_of_beds : " << this->bed <<'\n';
    cout << "number_of_tables : "<<this->table<<'\n';
    cout << "number_of_fridge: "<<this->fridge<<'\n';
    cout << "number_of_toilet: "<<this->toilet<<'\n';
    cout << "number_of_sofra: "<<this->sofra<<'\n';
    cout << "space_of_room: "<<this->space<<'\n';
    cout << "color_of_romm "<<this->color<<'\n';
}



