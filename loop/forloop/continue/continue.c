#include<stdio.h>

int main(){
    for(int i = 1; i <= 10; i++){

            if(i == 5){
            continue; //skipping 5
            }

        printf("%d\n",i);
    }

    for(int i = 1; i <= 10; i++){
        printf("%d\n",i);
        if(i == 5){
            continue; //skipping 5
        }
       }
    return 0;
}
    
    
