#include<iostream>
#include<math.h>
using namespace std;

int main(){

signed char a; 
cout<< "signed char "<<sizeof(a)<<" Bytes ";
cout<<"range//-128 to 127"<<pow(2,8)<<endl;



unsigned char b; //0 to 255
cout<< "unsigned char "<<sizeof(b)<<" Bytes ";
cout<<"range//0 to 255"<<endl;




short int c;
cout<< "short int "<<sizeof(c)<<" Bytes ";
cout<<"range//-32,768 to 32,767"<<endl;



unsigned short int d;
cout<< "unsigned short int "<<sizeof(d)<<" Bytes ";
cout<<"range// 0 to 65,535"<<endl;



int e;
cout<< " int "<<sizeof(e)<<" Bytes ";
cout<<"range// -2,147,483,648 to 2,147,483,647 "<<endl; //we can keep -->10^9<-- values in integer value

unsigned int f;
cout<< " unsigned int "<<sizeof(f)<<" Bytes ";
cout<<"range// 0 to 4,294,967,295 "<<endl; // 4byte = 32 bit ->2^32=4294967296 we can keep -->10^9<-- values in integer value


long g;
cout<< " long "<<sizeof(g)<<" Bytes ";
cout<<"range//  -9223372036854775808 to 9223372036854775807 "<<endl;


long long h;
cout<< "long  long "<<sizeof(h)<<" Bytes "; //2^64=18446744073709551616 we can keep -->10^18<-- values in long long integer value
cout<<"range//  0 to  "<<pow(2,64)<<endl;

}