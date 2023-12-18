#include<iostream>
using namespace std;

main(){
int n;
double sum=0;
double  ary[n];
cout<<"Enter your number of element size:";
cin>>n;
cout<<endl;



cout<<"Enter values:"<<endl;

for(int i=0; i<n; i++){

    cout<<"values "<<i<<"=";
    cin>>ary[i];
}
cout<<"numbers in the arry=";

for(int i=0; i<n; i++){
   cout<<ary[i]<<",";

}
cout<<endl;
for(int i=0; i<n; i++){
   sum=sum+ary[i];

}

cout<<"sum of those  number  is="<<sum<<endl;

double average=sum/n;

cout<<"average of those number is ="<<average<<endl;


}


