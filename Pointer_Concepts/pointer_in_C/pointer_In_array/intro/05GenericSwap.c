#include<stdio.h>

void genericSwap(void*a,void*b,int size){

    void* tempMemory = malloc(size);
    memcpy(tempMemory,a,size);
    memcpy(a,b,size);
    memcpy(b,tempMemory,size);
}

int main(){
    int a=34,b=45;
    double c=45.5, d=8654.3;
    printf("%d %d\n",a,b);

    genericSwap(&a,&b,sizeof(a));

    printf("%d %d\n",a,b);

    

    printf("%lf %lf\n",c,d);

    genericSwap(&c,&d,sizeof(c));

    printf("%lf %lf\n",c,d);
  
    return 0;
}