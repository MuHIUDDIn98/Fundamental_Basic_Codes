#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

     srand(time(0));

    for(int i=1; i<10; i++)
    {
         cout <<"random from 1 to 10 : "<<1+ (rand()%10)<<endl;
    }


    for (int x = 1; x <= 10; x++) {
        cout <<"Random from 1 to 6  :" <<1 + (rand() % 6) << endl;
    }

    return 0;
}

