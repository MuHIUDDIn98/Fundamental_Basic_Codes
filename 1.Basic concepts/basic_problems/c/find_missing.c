#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long Multiplication_Result; 
        int a, b, c;
        long long missing_number;

       
        scanf("%lld %d %d %d", &Multiplication_Result, &a, &b, &c);

        long long product_of_abc = (long long) a * b * c;


        if (Multiplication_Result == 0) {
        
            missing_number = 0;
            printf("%lld\n", missing_number);
        } 
        else {
           
            if (product_of_abc == 0) { 

                printf("-1\n");
            } 
            else if (Multiplication_Result % product_of_abc == 0) {
                
                missing_number = Multiplication_Result / product_of_abc;
                printf("%lld\n", missing_number);
            } 
            else {
              
                printf("-1\n");
            }
        }
    }
    return 0;
}