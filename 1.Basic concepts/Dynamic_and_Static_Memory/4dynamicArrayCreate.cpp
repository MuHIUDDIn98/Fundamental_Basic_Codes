#include<bits/stdc++.h>
using namespace std;



void fun(){


    int *x = new int[5];

    for(int i=0;i<5;i++){

        cin>>x[i];
    }
    cout<<"Array"<<endl;
    for(int i=0;i<5;i++){

        cout<<x[i]<<endl;
    }
}

int main(){
   
    fun();
    return 0;
}


