#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,index,input_value;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&index,&input_value);
    arr[index] = input_value;
    for(int i = n-1; i>=0; i--){

        printf("%d ",arr[i]);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
