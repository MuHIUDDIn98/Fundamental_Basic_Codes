#include<stdio.h>
int sumArray(int array[], int sz){
    if(sz<= 0)return 0;
    return (sumArray(array,sz-1)+array[sz-1]);

}

int main(){
    int n;
     scanf("%d", &n);
     int array[n];
     for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
     }
      int summation = sumArray(array,n);
      printf(" summation = %d",summation);
    return 0;
}