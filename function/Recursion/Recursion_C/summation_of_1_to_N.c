#include<stdio.h>
void sum_1_to_N(int n,int sum){
    if(n==0){
        printf("%d",sum);
        return;
    }
    sum_1_to_N(n-1,sum+n);
    return;

}

int main(){

     int n,sum=0;
     scanf("%d",&n);
    sum_1_to_N(n,sum);

    return 0;
}