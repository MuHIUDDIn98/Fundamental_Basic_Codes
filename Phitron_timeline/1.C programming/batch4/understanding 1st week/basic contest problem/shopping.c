//https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-04/challenges/shopping-13/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n<=1000){
        printf("Bad luck!\n");
    }
    else if(n>1000 && n<=1499){
        printf("I will buy Punjabi\n");
    }
    else{
        
        printf("I will buy Punjabi\n");
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
