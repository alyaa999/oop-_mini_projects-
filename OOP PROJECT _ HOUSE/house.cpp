#include "house.h"
#include "Rooms.h"
#include<iostream>
using namespace std;
house::house()
{
    this->address="un_known";
    this->capacity=0;
    this->date="un_known";
    this->num_rooms=0;
    this->OWner="un_known";
    this->prices=0;
    this->space=0;
    this->street="un_known";

}
house :: house (string a, int c , string d ,int p , string o  , int s , string st)
{

    this->address =  a;
    this->capacity = c;
    this->date = d;
    this->prices=p ;
    this->OWner= o;
    this->space= s;
    this->street =st;
}

void house:: add_bedroom(vector<Rooms>Bedroom)
{
    this->bedroom=Bedroom;

}
void house :: add_extra_rooms(vector<Rooms>Extra)
{
    this->extra_rooms=Extra;
}
void house:: add_kitchen(vector<Rooms>kitchen)
{
    this->kitchen=kitchen;

}
void  house:: add_bathroom(vector<Rooms>Bathroom)
{

    this->bathroom =Bathroom;
}
void house :: get_details()
{
    cout << "SHOW HOUSE INFO:"<<'\n';
    cout << this->address <<"\n";
    cout << this->date<< "\n";
    cout << this->capacity<< "\n";
    cout <<  this->bathroom.size() + this->bedroom.size()+this->extra_rooms.size()+this->kitchen.size() << "\n ";
    cout<< this->OWner << "\n";
    cout <<this->prices <<"\n";
    cout<< this->space<< "\n";
    cout <<this->street << "\n";
    cout << "...................."<<'\n';
    cout << "SHOW BATHROOM INFO"<<'\n';
    int cnt = 0;
    for(auto t: bathroom)
    {
        cout <<  "***" << ++cnt << " ***" <<'\n';
        t.display(); // print details of bathroom
        cout <<'\n';

    }
     cout << "...................."<<'\n';
      cout << "SHOW BEDROOM INFO"<<'\n';

       cnt = 0;
    for(auto t: bedroom)
    {
        cout <<  "***" << ++cnt << " ***" <<'\n';
        t.display(); // print details of bathroom
        cout <<'\n';

    }
      cout << "...................."<<'\n';
      cout << "SHOW KITCHEN INFO"<<'\n';
    cnt = 0 ;
    for(auto t : kitchen)
    {
          cout <<  "***" << ++cnt << " ***" <<'\n';
        t.display(); // print details of bathroom
        cout <<'\n';


    }  cout << "...................."<<'\n';
      cout << "SHOW EXTRA ROOMS INFO"<<'\n';
    cnt = 0 ;   for(auto t : extra_rooms)
    {
          cout <<  "***" << ++cnt << " ***" <<'\n';
        t.display(); // print details of bathroom
        cout <<'\n';


    }

    cout  <<  "that's all .. " <<'\n';

}

house::~house()
{
    //dtor
}
