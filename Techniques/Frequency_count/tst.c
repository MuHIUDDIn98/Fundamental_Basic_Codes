#include<stdio.h>
#include<string.h>
int main(){

   int T;
   char str[10001];
   int capCount;
   int smallCount;
   int digitCount;

   scanf("%d",&T);

   while(T!=0){
    capCount=0;
    smallCount=0;
    digitCount=0;
    scanf("%s",str);
    for(int i=0; i<strlen(str);i++){

        if(str[i]>=65 && str[i]<=90){
            capCount++;
        }
        else if(str[i]>=97 && str[i]<=122){
            smallCount++;
        }
        else if(str[i]>=48 && str[i]<=57){
            digitCount++;
        }

    }
    printf("%d %d %d\n",capCount,smallCount,digitCount);
    T--;
   }
    return 0;
}