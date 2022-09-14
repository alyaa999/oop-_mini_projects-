#include <iostream>
#include "house.h"
#include "Rooms.h"
using namespace std;

int main()
{
   vector<Rooms> bathroom;
   vector<Rooms> bedroom;
   vector<Rooms> kitchen;
   vector<Rooms>extra_rooms;
   Rooms first_bathroom;
   Rooms second_bathroom ;
   Rooms first_bedroom ;
   Rooms second_bedroom;
   Rooms first_kitchen ;
   Rooms second_kitchen ;
   Rooms workspace ;
   Rooms living_room;
   first_bathroom.add(0 ,1 , "red" , 2 , 4 ,  0 , 0 ,1 ,9,10 ,11);
   second_bathroom.add(0 ,1 , "red" , 2 , 4 ,  0 , 0 ,1 ,9,10 ,11);
   first_bedroom.add(0 ,1 , "red" , 2 , 4 ,  0 , 0 ,1 ,9,10 ,11);
   second_bedroom.add(0 ,1 , "red" , 2 , 4 ,  0 , 0 ,1 ,9,10 ,11);
   workspace.add(0 ,1 , "red" , 2 , 4 ,  0 , 0 ,1 ,9,10 ,11);
   living_room.add(0 ,1 , "red" , 2 , 4 ,  0 , 0 ,1 ,9,10 ,11);
   first_kitchen.add(0 ,1 , "red" , 2 , 4 ,  0 , 0 ,1 ,9,10 ,11);
   second_kitchen.add(0 ,1 , "red" , 2 , 4 ,  0 , 0 ,1 ,9,10 ,11);
   bathroom.push_back(first_bathroom);
   bathroom.push_back(second_bathroom);
   kitchen.push_back(first_kitchen);
   kitchen.push_back(second_kitchen);
   bedroom.push_back(first_bedroom);
   bedroom.push_back(second_bedroom);
   extra_rooms.push_back(workspace);
   extra_rooms.push_back(living_room);
   house first_house ("111" , 1 , "22" , 2 , "2332" , 2 , "23224")  ;
   first_house.add_bathroom(bathroom);
   first_house.add_bedroom(bedroom);
   first_house.add_kitchen(kitchen);
   first_house.add_extra_rooms(extra_rooms);

   first_house.get_details();




}
