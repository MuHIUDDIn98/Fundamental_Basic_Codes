#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome( char *s){
    
    int i=0,j=strlen(s)-1;
    while(i<j){
        
        if(s[i]!=s[j]){
            return 0;
        }
        
     i++;
     j--;
    }
return 1;
}

int main() {
    char s[1000];
    
    scanf("%s",s);
    
    if(is_palindrome(s)){
        
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
        
    }
    
    
  
    return 0;
}