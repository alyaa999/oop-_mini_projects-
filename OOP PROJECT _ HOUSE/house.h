#ifndef HOUSE_H
#define HOUSE_H
#include "Rooms.h"
#include<bits/stdc++.h>
using namespace std;
class house
{
protected:
    string address ;
    string OWner ;
    string street ;
    string date ;
    int num_rooms ;
    int prices;
    int capacity;
    int space  ;
    vector<Rooms>bathroom; //
    vector<Rooms>bedroom;
    vector<Rooms>kitchen ;
    vector<Rooms>extra_rooms;
public:

    house();

    void add_bedroom(vector<Rooms>Bedroom);
    void add_kitchen(vector<Rooms>kitchen);
    void add_bathroom(vector<Rooms>Bathroom);
     void add_extra_rooms(vector<Rooms>extra);
    void delete_bedroom(vector<Rooms>Bedroom);
    void delete_kitchen(vector<Rooms>kitchen);
    void delete_bathroom(vector<Rooms>bathroom);
    void get_details();
    house (string a, int c , string d ,int p , string o  , int s , string st);

    virtual ~house();



};

#endif // HOUSE_H
