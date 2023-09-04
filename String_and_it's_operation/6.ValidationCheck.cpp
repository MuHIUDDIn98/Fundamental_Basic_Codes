#include<iostream>
using namespace std;


int validation(string name){

int i;
for(i=0;name[i]!='\0';i++){

if(!(name[i] >= 65 && name[i]<=90) && !(name[i]>97 && name[i]<122) && !(name[i]>97 && name[i]<=122))
    return 0;
}
return 1;
}

int main()
{
string name ="asisrrul321";

bool x = validation(name);
cout<<" resut "<<x<<endl;

if(x){

    cout<<"valid string"<<endl;
}
else{

    cout<<"Invalid string ";
}

}