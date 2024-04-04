#include<bits/stdc++.h>
using namespace std;

int main(){



    cout<<"enter array element number :"<<endl;
     int n;
    cin>>n;
    int array[n];
    int key;

    cout<<"Enter your array element :"<<endl;
    for(int i=0;i<n;i++){

    cin>>array[i];
    }

    cout<<"enter your key :";
    cin>>key;

    for(int j=0;j<n;j++){

    if(array[j]==key){

    cout<<"index number of array  "<<j<<" element  "<<array[j]<<endl;
    break;

    }
    else{

        cout<<"element not found"<<endl;
    }


    }
return 0;
}