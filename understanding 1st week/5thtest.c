#include<stdio.h>
int main(){
    printf("int i=0;i<10;i++");
    printf("i \t value\n");
    for(int i=0;i<10;i++){
        printf("%d\t %d\n",i,i);
    }
    printf("int i=10-1;i>=0;i-=1\n");
    printf("i \t value\n");
    for(int i=10-1;i>=0;i-=1){
        printf("%d\t %d\n",i,i);
    }
    return 0;
}