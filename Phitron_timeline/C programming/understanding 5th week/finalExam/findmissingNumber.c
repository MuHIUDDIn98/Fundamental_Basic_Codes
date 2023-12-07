#include <stdio.h>

long long findMissingNumber(long long M, long long A, long long B, long long C) {
    if (A == 0 || B == 0 || C == 0) {
        if (A == 0 && B == 0 && C == 0 && M == 0) {
            return 0;
        } else {
            return -1;
        }
    }
    
     int M2=A*B*C;
     if(M%M2==0){
     long long missing = M/M2;
      return missing;
     }
     else{
        return -1;
     }
    
}

int main() {
    int T;
    scanf("%d", &T);

     while(T--){
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        
        long long missingNumber = findMissingNumber(M, A, B, C);
        
        printf("%lld\n", missingNumber);
    }

    return 0;
}