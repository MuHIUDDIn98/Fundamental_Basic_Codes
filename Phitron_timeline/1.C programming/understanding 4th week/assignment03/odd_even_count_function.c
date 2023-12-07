
#include <stdio.h>
 void odd_even(){
     int evCount=0;
     int oddCount=0;
     int n;
     scanf("%d",&n);
     int array[n];
      for(int i=0; i<n; i++){
          scanf("%d",&array[i]);
      }
     for(int i=0; i<n; i++){
         if(array[i]%2==0){
             evCount++;
         }
         else{
             oddCount++;
         }
     }
     printf("%d %d",evCount,oddCount);
 }

int main() {
 
  
  odd_even();
  

    return 0;
}