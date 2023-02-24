#include<iostream>
using namespace std;

int main(){


  cout<<"The pointer data type doesn't control the memoery size of the pointer variable"<<endl;
  cout<<"The pointer data type decides the behavior of the operations carried out on the pointer variable"<<endl;

long long int G_data =0xFFFEABCD11112345;
char *pAddress=(char*)&G_data;
  cout<<" G_data address :"<<&G_data<<endl;  //using C out
printf("G_data address value: %I64X\n",&G_data); //I64x example 
printf("G_data address value: %x\n",&G_data);
printf("G_data address value: %x\n",pAddress);  //printing address using pointer 


//char *pAddress=(char*)&G_data;
cout<<"===============read operation on pAddress variable yields 1 byte of data========================="<<endl;
printf("Value at address  %p : %x\n",pAddress,*pAddress);
pAddress++;
printf("Value at address  %p : %x\n",pAddress,*pAddress);
pAddress++;
printf("Value at address  %p : %x\n",pAddress,*pAddress);
pAddress++;
printf("Value at address  %p : %x\n",pAddress,*pAddress);
pAddress++;
printf("Value at address  %p : %x\n",pAddress,*pAddress);
pAddress++;
printf("Value at address  %p : %x\n",pAddress,*pAddress);
pAddress++;
printf("Value at address  %p : %x\n",pAddress,*pAddress);
pAddress++;
printf("Value at address  %p : %x\n",pAddress,*pAddress);

//cout<<"Value at address  Decimal equivalent"<< pAddress <<"  is :"<<*pAddress<<endl;// Decimal equivalent


cout<<"================read operation on pAddress variable yields 2 byte of data========================="<<endl;
short int *pAddress2=(short*)&G_data;
printf("Value at address %p : %x\n",pAddress2,*pAddress2);
pAddress2++;
printf("Value at address %p : %x\n",pAddress2,*pAddress2);
pAddress2++;
printf("Value at address %p : %x\n",pAddress2,*pAddress2);
pAddress2++;
printf("Value at address %p : %x\n",pAddress2,*pAddress2);
cout<<"Value at address Decimal equivalent "<< pAddress2 <<"  is :"<<*pAddress2<<endl;// Decimal equivalent

cout<<"================read operation on pAddress variable yields 4 byte of data========================="<<endl;

int *pAddress1=(int*)&G_data;
printf("Value at address  %p : %x\n",pAddress1,*pAddress1);
pAddress1++;
printf("Value at address  %p : %x\n",pAddress1,*pAddress1);

cout<<"Value at address Decimal equivalent "<< pAddress1 <<"  is :"<<*pAddress1<<endl;// Decimal equivalent


cout<<"=================read operation on pAddress variable yields 8 byte of data========================"<<endl;
long long *pAddress3=(long long*)&G_data;
printf("Value at address %p : %I64X\n",pAddress3,*pAddress3);
cout<<"Value at address  Decimal equivalent "<< pAddress3 <<"  is :"<<*pAddress3<<endl;// Decimal equivalent

return 0;

}