#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    for(int i=1; i<10; i++)
    {
         cout <<"random"<< rand()%10<<endl;
    }


    srand(time(0));
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}

