#include<iostream>
using namespace std;

int main(){

long long int G_data =0xFFFEABCD11112345;
char *pAddress=(char*)&G_data;
  cout<<" &G_data address  :"<<&G_data<<endl;  //using C out
printf("&G_data address I64X value: %I64X\n",&G_data); //I64x example 
printf("G_data address value: %x\n",&G_data);
printf("G_data address value: %x\n",pAddress);  //printing address using pointer pAddress=&G_data


//char *pAddress=(char*)&G_data;
printf("Value at address %p : %x\n",pAddress,*pAddress);
pAddress=pAddress+1;
printf("Value at address %p : %x\n",pAddress,*pAddress);

short *pAddress2=(short*)&G_data;
printf(" for Short type ,Value at  address %p : %x\n",pAddress2,*pAddress2);
pAddress2=pAddress2+1;
printf("next short ,Value at address %p : %x\n",pAddress2,*pAddress2);


long long *pAddress3=(long long*)&G_data;
printf("for long long type ,Value at address %p : %x\n",pAddress3,*pAddress3);
pAddress3=pAddress3+1;
printf(" next short ,Value at address %p : %x\n",pAddress3,*pAddress3);

return 0;

}
