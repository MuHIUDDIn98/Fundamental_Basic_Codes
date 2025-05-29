#include<bits/stdc++.h>
using namespace std;

class Crickter{

    public:
    int jersey_no;
    string country;

   


};


int main(){

    Crickter *dhoni = new Crickter();
    dhoni->jersey_no = 4;
    dhoni->country = "india";
    


    Crickter *kohli = new Crickter();
    //copy object
    *kohli = *dhoni;
     
    delete dhoni;

    cout<<kohli->jersey_no<<endl;
    cout<<kohli->country<<endl;






   
return 0;
}