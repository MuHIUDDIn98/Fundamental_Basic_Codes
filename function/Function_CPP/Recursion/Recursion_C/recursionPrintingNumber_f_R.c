#include<stdio.h>

void fprint(int i){
    if(i==11) return;
    printf("i = %d\n",i);
    fprint(i+1);
    printf("====\n");
    printf("fprint ( %d ) i = %d\n",i,i);

}

void Rprint(int i){
    if(i==0) return;
    printf("i = %d\n",i);
    Rprint(i-1);
    printf("====\n");
    printf("Rprint ( %d ) i = %d\n",i,i);
}

int main(){

     fprint(1);
     printf("====Reverse print ====\n");
     Rprint(10);
    return 0;
}