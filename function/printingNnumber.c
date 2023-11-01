#include<stdio.h>
void print_n_numbers(int *x){
    for(int i=1; i<=*x; i++){
        if(i<*x){       
        printf("%d ",i);
        }
        else{
          printf("%d",i);  
        }

    }
}

int main(){

     int n;
     scanf("%d",&n);
     print_n_numbers(&n);
    return 0;
}