#include<stdio.h>
int main(){
    
    int num;

    printf("enter your number range from 1 to :");
    scanf("%d",&num);

    for(int i = 1; i <= num; i++){
        if(i % 2 == 0){
            printf("%d -Even\n", i);
        }
        else{
            printf("%d -Odd\n",i);
        }


    }



    return 0;
}