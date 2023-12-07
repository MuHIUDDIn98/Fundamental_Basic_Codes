#include<stdio.h>
#include<limits.h>

int main(){

     int n,a;
     int max=INT_MIN;
     scanf("%d",&n);
     for(int i=1; i<=n; i++){
        scanf("%d",&a);
        if(a>max)
           max=a;
     }
     printf("%d\n",max);
    return 0;
}