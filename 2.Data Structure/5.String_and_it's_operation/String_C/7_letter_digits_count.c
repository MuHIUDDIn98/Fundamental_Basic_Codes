#include <stdio.h>
#include<string.h>

int main() {
   char S[1000001];
   int testCase;
   scanf("%d",&testCase);
   while(testCase--){
    int digit_count=0;
    int cap_count=0;
    int small_count=0;
    scanf("%s",S);
    for(int i=0; i<strlen(S); i++){
        if(S[i] >= 'A' && S[i] <= 'Z') {
            cap_count++;
        } else if(S[i] >= 'a' && S[i] <= 'z') {
            small_count++;
        } else if(S[i] >= '0' && S[i] <= '9') {
            digit_count++;
        }        

    }
    printf("%d %d %d\n",cap_count,small_count,digit_count);
    
   }
   
    return 0;
}