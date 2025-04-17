#include<stdio.h>
int main(){
    
    int n;
    int counter=0;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        if(i%2==0){
            printf("%d\n",i);
            counter++;
        }
        
    }
    if(counter>0){
        
    }
    else{
        printf("-1");
    }
    
    return 0;
}