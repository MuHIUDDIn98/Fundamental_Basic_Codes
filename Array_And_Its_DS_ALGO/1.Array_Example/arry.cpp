#include <iostream>
using namespace std;

int main()
{
    /*int myArr[5];
  cout<<"Enter your numbers : "<<endl;
    for(int x=0; x<5; x++) {
      cin>> myArr[x];


    }
     cout<<"values of the arry : "<<endl;

    for(int i=0; i<5; i++){
        cout<<"value of indx "<<i<<":"<<myArr[i] <<endl;


    }
    int sum=0;

    for(int i=0; i<5; i++){
      sum+=myArr[i];

    }
  cout<<"addition of those numbers :"<<sum<<endl;

  */
int A[10]={1,2,3,4,5,6,7,8,9,10};

cout<<"1 dimensinal array :"<<endl;
for(int i=0;i<10;i++){

  cout<<A[i]<<" ";
}
cout<<endl;

cout<<"2 dimensional array :"<<endl;
cout<<"elements of 2 D array ="<<2*3<<endl;
      int x[2][3] = {{2, 3, 4}, 
                     {8, 9, 10}};
    cout << x[0][0]<<" " <<x[0][1]<<" "<< x[0][2]<< endl;
    cout << x[1][0]<<" " <<x[1][1]<<" "<< x[1][2]<< endl;

    cout<<"printing element Of array using for loop"<<endl;
  for(int i=0;i<2;i++){
     for(int j=0;j<3;j++)
     {
      cout<<"x"<<"["<<i<<"]"<<"["<<j<<"]"<<" : "<< x[i][j] <<" ";
     }
     cout<<endl;

  }


cout<<"3 dimensional array :"<<endl;
cout<<"elements of 3 D array = "<<2*3*4<<endl;
//number of 2D array 2, row 3, colum 4
 int Y[2][3][4]={{{1,2,3,4},        //0th row 
                  {5,6,7,8},        //1th row 
                  {9,10,11,12}},    //2th row
                {{13,14,15,16},     //0th row 
                 {17,18,19,20},     //1th row
                 {21,22,23,24}}} ;  //2th row

        //cout<<Y[0][0][0]<<" "<<Y[0][0][1]<<" "<<Y[0][0][2]<<" "<<Y[0][0][3]<<endl;
        for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                cout<<"Y"<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"] : "<<Y[i][j][k]<<" ";
            
        }
        cout<<endl;
        }
        cout<<endl;
        }
      return 0;
}
