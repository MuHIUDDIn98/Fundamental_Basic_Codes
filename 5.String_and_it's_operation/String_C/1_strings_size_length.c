#include<stdio.h>


int main(){

     char a[5];
     int b[5];
     for(int i = 0; i<5; i++){   //input take char by char
        scanf("%c",&a[i]);
     }
    
    //size of a integer value (normal size of an interger)
    printf("%d\n",sizeof(int));
    //printing size of array a[5]   
    printf("%d\n",sizeof(a));
    //szie of total array in bytes 
    printf("%d\n",sizeof(a)*sizeof(char));
    //size of total array of integer byte  5*4 = 20 bytes
    printf("%d\n",sizeof(b));

    //printing  string value
    for(int i = 0; i<5; i++){  //printing the string using char

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
    //printing string of numbers  ... decimal equivalent number 

     for(int i = 0; i<5; i++){

        printf("%c ",a[i]);
     }


    return 0;
}