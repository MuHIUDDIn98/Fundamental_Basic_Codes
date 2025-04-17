#include<stdio.h>
int main(){

   int even=0;
   int pos=0;
   int odd=0;
   int neg=0;
   int n;
   int num;
   scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d",&num);
         if(num%2==0 || num==0){
              even++;
         }
         else{
              odd++;
         }
         if(num>0){
              pos++;
         }
         else if(num<0){
              neg++;
         }
        }

         printf("Even :%d\n",even);
         printf("Odd :%d\n",odd);
         printf("Positive :%d\n",pos);
         printf("Negative :%d\n",neg);


    return 0;
}