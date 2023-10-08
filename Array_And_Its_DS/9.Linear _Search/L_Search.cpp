#include<iostream>
using namespace std;

int main(){

int n;
int array[n];
int key;

cout<<"enter array element number :"<<endl;
cin>>n;

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