#include<stdio.h>


int main(){

     int n;
     int a;
     int EvenCount=0;
     int OddCount=0;
     int PositiveCount=0;
     int Negativecount=0;

     scanf("%d",&n);

     for(int i =1; i<=n; i++){

        scanf("%d",&a);

        if(a%2 == 0){
            EvenCount++;
        }
        else{
            OddCount++;
        }
        if(a>0){
            PositiveCount++;
        }
        else if(a<0){
            Negativecount++;
        }
    }
     printf("Even: %d\n",EvenCount);
     printf("Odd: %d\n",OddCount);
     printf("Positive: %d\n",PositiveCount);
     printf("Negative: %d\n",Negativecount);

    return 0;
}