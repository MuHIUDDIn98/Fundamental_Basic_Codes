
https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-04/challenges/divisible-2-1-1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
      if((i %3 == 0) && (i%7==0)){
          printf("%d\n",i);
      } 
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
