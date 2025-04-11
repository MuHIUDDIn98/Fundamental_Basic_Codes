#include<stdio.h>


int main(){

     char a[5];
     int b[5];
     for(int i = 0; i<5; i++){

        scanf("%c",&a[i]);
     }
    
    //size of a integer value
    printf("%d\n",sizeof(int));
    //printing size of array a[5]
    //szie of total array of char byte 
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(a)*sizeof(char));
    //size of total array of integer byte
    printf("%d\n",sizeof(b));

    //printing  string value
    for(int i = 0; i<5; i++){

        printf("%c ",a[i]);
     }
     //printing number value of each charechter 
     for(int i = 0; i<5; i++){

        printf("%d ",a[i]);
     }
    //take input all number value 
     for(int i = 0; i<5; i++){

        scanf("%d",&a[i]);
     }
    //printing string of numbers  ...

     for(int i = 0; i<5; i++){

        printf("%c ",a[i]);
     }


    return 0;
}