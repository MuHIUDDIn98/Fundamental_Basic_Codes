#include<stdio.h>

int findMinMax(int a,int b,int *min,int *max){
    if(a>b){
        *max=a;
        *min=b;
    }
    else{
        *max=b;
        *min=a;

    }

}
int main(){

   int a;
   int b;
   scanf("%d %d",&a,&b);
   int min=0;
   int max=0;
   findMinMax(a,b,&min,&max); //pass by vaule and //pass by reference
   printf("max =%d\n",max);
   printf("min =%d\n",min);
    return 0;
}