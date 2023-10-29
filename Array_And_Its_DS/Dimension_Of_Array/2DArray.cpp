#include <iostream>
using namespace std;

int main()
{

   const int i = 3, j = 3;
  // Declaring array
  int arr[i][j] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
  for(int a = 0; a < 3; a++)
  {
    for(int b = 0; b < 3; b++)
    {
      cout << arr[a][b] << " ";
    }
    cout << endl;
  } 

//++++++++++++2nd Methode++++++++++++++++++//
  int *A[3]; //only pinter array in stack
  A[0]=new int[4];
  A[1]=new int[4];
  A[2]=new int[4];

 
 cout<<"Enter your array Element :"<<endl;
  for(int k=0;k<3;k++){

    for(int l=0;l<4;l++){
        cin>>A[k][l];
    }
  }
cout<<"Your Entered Array :"<<endl;
for(int k=0;k<3;k++){

    for(int l=0;l<4;l++){
        cout<<A[k][l]<<" ";
    }
    cout<<endl;
  }

  //+++++++++++++++3rd methode double pointer +++++++++++++++++++++++++++++//
int **B;  //only double pointer in stack
B=new int*[3];
B[0]=new int[4];
B[1]=new int[4];
B[2]=new int[4];
 cout<<"Enter your array B[] Element :"<<endl;
  for(int k=0;k<3;k++){

    for(int l=0;l<4;l++){
        cin>>B[k][l];
    }
  }
cout<<"Your  Entered array B[0]  :"<<endl;
for(int k=0;k<3;k++){

    for(int l=0;l<4;l++){
        cout<<B[k][l]<<" ";
    }
    cout<<endl;
  }

}