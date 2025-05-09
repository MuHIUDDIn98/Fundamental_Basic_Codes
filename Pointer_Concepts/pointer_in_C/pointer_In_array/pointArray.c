#include<stdio.h>
void m(int *p){

    for(int i=0;i<5;i++){
        printf("%d",p[i]);
    }

}
int main(){

   int a[5]={6,5,3};
   m(a);
    return 0;
}