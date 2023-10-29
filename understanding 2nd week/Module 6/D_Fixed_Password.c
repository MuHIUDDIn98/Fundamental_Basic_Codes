#include<stdio.h>


int main(){

     int a=0;


     while(scanf("%d",&a) != EOF){
         if(a == 1999){
            printf("Correct\n");
            break;
        }
        else if(a != 1999){
            printf("Wrong\n");
        }

     }
    //  while(1){

    //     scanf("%d",&a);

    //     if(a == 1999){
    //         printf("Correct\n");
    //         break;
    //     }
    //     else if(a != 1999){
    //         printf("Wrong\n");
    //     }
    //  }
    return 0;
}