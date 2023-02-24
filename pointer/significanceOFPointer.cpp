#include<iostream>
using namespace std;

int main(){

long long int G_data =0xFFFEABCD11112345;
char *pAddress=(char*)&G_data;
  cout<<" G_data address :"<<&G_data<<endl;  //using C out
printf("G_data address value: %I64X\n",&G_data); //I64x example 
printf("G_data address value: %x\n",&G_data);
printf("G_data address value: %x\n",pAddress);  //printing address using pointer 


//char *pAddress=(char*)&G_data;
printf("Value at address %p : %x\n",pAddress,*pAddress);
cout<<"Value at address "<< pAddress <<"  is :"<<*pAddress<<endl;// Decimal equivalent

short *pAddress2=(short*)&G_data;
printf("Value at address %p : %x\n",pAddress2,*pAddress2);
cout<<"Value at address "<< pAddress2 <<"  is :"<<*pAddress2<<endl;// Decimal equivalent

int *pAddress1=(int*)&G_data;
printf("Value at address %p : %x\n",pAddress1,*pAddress1);
cout<<"Value at address "<< pAddress1 <<"  is :"<<*pAddress1<<endl;// Decimal equivalent

long long *pAddress3=(long long*)&G_data;
printf("Value at address %p : %I64X\n",pAddress3,*pAddress3);
cout<<"Value at address "<< pAddress3 <<"  is :"<<*pAddress3<<endl;// Decimal equivalent

return 0;

}