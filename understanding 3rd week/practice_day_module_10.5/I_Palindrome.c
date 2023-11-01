#include<stdio.h>
#include<string.h>

int main(){

     char a[1000];
     int answer = 0;
     scanf("%s",a);
    int i=0, j=(strlen(a)-1);
    while(i<j){
        if(a[i] == a[j]){
         answer++;
        }
        i++;
        j--;

    }

    if(answer>0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}