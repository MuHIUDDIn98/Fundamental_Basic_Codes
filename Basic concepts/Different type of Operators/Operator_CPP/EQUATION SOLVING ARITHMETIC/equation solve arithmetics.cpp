#include<iostream>
using namespace std;

int main()
{
   double farenhite,celceous;

   cout<<"Enter celceous=";
   cin>>celceous;


   farenhite=1.8*celceous+32;
   cout<<"farenhite="<<farenhite<<endl;


   cout<<"Enter farenhite=";
   cin>>farenhite;
   celceous=(farenhite-32)/1.8;
   cout<<"celceous="<<celceous<<"  celceous to kelvin="<<celceous+273<<"kelvin";




return 0;
}
