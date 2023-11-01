#include<stdio.h>


int main(){

    int n;
    long long sum = 0;
    scanf("%d",&n);
    long arr[n];   
    for(int i = 0; i< n; i++){
        scanf("%ld",&arr[i]);
        sum = sum + arr[i];
    }

    if(sum < 0){

        sum*=-1;
    }
    
    printf("%lld",sum);
    return 0;
}