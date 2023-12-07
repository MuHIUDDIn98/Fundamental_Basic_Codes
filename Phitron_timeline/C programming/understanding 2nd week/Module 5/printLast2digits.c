#include<stdio.h>
#include<math.h>

int main(){

     
     int a,b,c,d;
     long int e;
     int lastdigit;
     int last2digit = 0;
     scanf("%d %d %d %d",&a,&b,&c,&d);
     e = a*b*c*d;
     
     int i=0;
     while(i<2){
        lastdigit=e%10;
        last2digit = last2digit + lastdigit * pow(10,i);
        e=e/10;
        i++;
     }

     printf("%d\n",last2digit);

    return 0;
}