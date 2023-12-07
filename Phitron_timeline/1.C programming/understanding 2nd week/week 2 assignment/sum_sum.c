#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum_n =0, sum_p =0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            sum_p = sum_p+arr[i];
        }
        else{
            sum_n = sum_n+arr[i];
        }
    }
    printf("%d %d",sum_p,sum_n);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
