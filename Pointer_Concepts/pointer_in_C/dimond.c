#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    scanf("%d",&n);
    int space=n-1;
    int hashdash=1;
    int totalLine=n*2-1;


    for(int i=1;i<=totalLine;i++){
        if(i<=totalLine/2+1){

            for(int j=1;j<=space;j++){
                printf(" ");
            }
            for(int k=1;k<=hashdash;k++){
                if(i%2==0){

                    printf("-");


                }
                else{
                    printf("#");
                }


            }
            printf("\n");
            space--;
            hashdash+=2;



        }
        else if(i>totalLine/2+1){

            for(int j=1;j<=space;j++){
                printf(" ");
            }
            for(int k=1;k<=hashdash;k++){
                if(i%2==0){

                    printf("-");


                }
                else{
                    printf("#");
                }


            }
            printf("\n");
            space++;
            hashdash-=2;




        }
    }




   




    return 0;
}
