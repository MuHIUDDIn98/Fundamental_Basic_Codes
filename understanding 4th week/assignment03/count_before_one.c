#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int arr[],int *sz){
    int count=0;
    for(int i=0; i<*sz; i++){
    if(arr[i]==1){
      break;  
    }
    count++;
    }
    
 return count;   
}

int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    
    for(int i=0; i<n; i++){
    scanf("%d", &array[i]);   
    }
    
    printf("%d",count_before_one(array,&n));
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}