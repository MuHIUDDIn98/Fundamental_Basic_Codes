#include<iostream>
#include<math.h>
using namespace std;

main()
{
      double farenhite,celceous;

   cout<<"Enter celceous=";
   cin>>celceous;


   farenhite=1.8*celceous+32;
   cout<<"farenhite="<<farenhite<<endl;


   cout<<"Enter farenhite=";
   cin>>farenhite;
   celceous=farenhite-32/1.8;
   cout<<"celceous="<<celceous<<"elceous to kelvin="<<celceous+273<<"kelvin";


}
