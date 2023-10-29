#include<stdio.h>


int main(){

     int a[5] = {10,20,30,40,50};
     char b[5] = {'a','n','i','k','e'};
     char c[4] ="anik";  //missing  null char printing problem ...
     char d[] = "anik\0"; //added null char for printing... it will increase the length of string...
     char e[] ="anik";   //automatically added a null char into the last index
     char f[5]="anik";   //automatically added null char  into the last index

   //printing the charecters of array b using char
     for(int i = 0; i<5; i++){
        printf("%c ",b[i]);
     }
    printf("\n");
    //printing  the charecters off a array  using char 
    for(int i = 0; i<5; i++){
        printf("%d ",a[i]);
     }
     printf("\n");
   //printing  the charecters of c array using char 
    for(int i = 0; i<5; i++){
        printf("%c ",c[i]);
     }
     printf("\n");
     printf("printing c[4] problemetic missing null char  :%s\n",c);  //printing string without &

     int size0 = sizeof(d)/sizeof(char);
     printf("char d[] = \"%s\"size of array d[] : %d\n",d,size0);
     int size1 = sizeof(e)/sizeof(char);
     printf("char e[] = \"%s\"size of array e[] : %d\n",e,size1);
     int size2 = sizeof(f)/sizeof(char);
     printf("char f[5] = \"%s\"size of array f[5] : %d\n",f,size2);
     


    return 0;
}