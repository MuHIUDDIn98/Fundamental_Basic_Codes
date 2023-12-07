#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> myArray;

    vector<int> copyArray;

    myArray.push_back(101);

    for(int i = 1; i <=12; i++){

    myArray.push_back(i*2);   

    }

     // Iterate through the vector
     cout << "Vector elements print : ";
    for (int i : myArray) {
        cout << i << " ";
    }

 cout<<endl;
     // Get the size of the vector
   cout << "Vector size: " << myArray.size() << endl;
   cout << "Vector capacity  size: " << myArray.capacity() << endl;
   cout << "Vector max_capacity size: " << myArray.max_size() << endl;



   // Remove the last element
      myArray.pop_back();

      cout<<" After pop back "<<endl;

  // Iterate through the vector

    cout << "Vector elements: ";

    for (int i : myArray) {

        cout << i << " ";
    }

 cout<<endl;
     // Get the size of the vector

   cout << "Vector size: " << myArray.size() << endl;

   // vector_name.assign(iter_first, iter_last); Assigns elements from a range defined by iterators.

   copyArray.assign(myArray.begin(),myArray.end());


   //vector_name.assign(count, value);   // Assigns 'count' copies of 'value' to the vector.


   // Iterate through the vector printing elements of vector

    cout << "Vector elements: ";

    for (int i : myArray) {

        cout << i << " ";
    }

    cout<<endl;
    
     // Iterate through the vector

    cout << "Vector elements: ";

    for (int i : copyArray) {

        cout << i << " ";
    }
      cout<<endl;


    cout << "Vector elements: ";

    for (int i=0;i<copyArray.size();i++) {

        cout << copyArray[i] << " ";
    }

    cout<<endl;

     cout << "Vector elements: ";

    for (auto a=copyArray.begin(); a!=copyArray.end();a++) {

        cout << *a << " ";
    }

    cout<<endl;



 
cout<<"Last elements of vector copyArray :"<<copyArray[(copyArray.size())-1]<<endl;

}


