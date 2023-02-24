#include<iostream>
using namespace std;

int main()
{
     int a[10];
     a[0]=5;
     a[5]=10;
     cout<< "array is a[10]"<<" "<<"index value of array a[0]=5, a[5]=10"<<endl;
     cout<<"value of index a[0] is="<<a[0] <<"  "<<" value of indexof [5] is=" <<a[5]<<endl;
     cout<<"size of array a[10]="<<sizeof(a)<<endl;

     cout<<endl<<endl<<endl;
     int b[10]={10,20,30,40,50,60,70,80,90,140};
     cout<<"array b[10]={10,20,30,40,50,60,70,80,90,1140}"<<endl;

     cout<<"value of index b[9] is="<<b[9]<<" "<<"value of index b[8] is="<<b[8]<<" "<< "value of index b[2] is ="<<b[2]<<endl;
     int largest=INT_MIN;
     for(int i=0;i<10;i++)
     {
          if(b[i]>largest)
          {
               largest=b[i];
          }

     }
     cout<<"largest of the b[i] array elements is ="<<largest<<endl;
     int smallest=INT_MAX;
     for(int i=0;i<10;i++)
     {
          if(b[i]<smallest)
          {
               smallest=b[i];
          }

     }
     cout<<"smallest of the b[i] array elements is ="<<smallest<<endl;

     cout<<"size of array b[10]="<<sizeof(b)<<endl;
     cout<<endl<<endl<<endl;

     cout<<"an array e[10]={10,30,50,70,90,110,130,150,170,190}"<<endl;
     int e[10]={10,30,50,70,90,110,130,150,170,190};
     for(int i=0;i<10;i++){
          cout<<"index="<<i<<" "<<"indexvalue="<<e[i]<<endl;

     }
     cout<<"size of array e[10]="<<sizeof(e)<<endl;
      cout<<endl<<endl<<endl;

     int c[11];

     cout<<"array is c[11]"<<endl;
     cout<<"cout of c[10]= multiplying by its index each time"<<endl;
     for(int i=0;i<12;i++){
         c[i]=i*i;

     cout<<c[i]<<"  ";


     }
     cout<<"size of array="<<sizeof(c)<<endl;
     return 0;
}
