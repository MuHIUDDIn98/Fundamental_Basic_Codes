#include <stdio.h>

int main() {
    printf("--- More Post Increment Examples ---\n");
    int p_inc1 = 2;
    printf("p_inc1++: %d (p_inc1 is now %d)\n", p_inc1++, p_inc1);

    int p_inc2 = 7;
    int result_p_inc = p_inc2++ + 3;
    printf("p_inc2++ + 3: %d (p_inc2 is now %d)\n", result_p_inc, p_inc2);

    printf("\n--- More Pre Increment Examples ---\n");
    int pre_inc1 = 4;
    printf("++pre_inc1: %d (pre_inc1 is now %d)\n", ++pre_inc1, pre_inc1);

    int pre_inc2 = 1;
    int result_pre_inc = ++pre_inc2 * 2;
    printf("++pre_inc2 * 2: %d (pre_inc2 is now %d)\n", result_pre_inc, pre_inc2);

    printf("\n--- More Post Decrement Examples ---\n");
    int p_dec1 = 9;
    printf("p_dec1--: %d (p_dec1 is now %d)\n", p_dec1--, p_dec1);

    int p_dec2 = 12;
    int result_p_dec = p_dec2-- - 5;
    printf("p_dec2-- - 5: %d (p_dec2 is now %d)\n", result_p_dec, p_dec2);

    printf("\n--- More Pre Decrement Examples ---\n");
    int pre_dec1 = 6;
    printf("--pre_dec1: %d (pre_dec1 is now %d)\n", --pre_dec1, pre_dec1);

    int pre_dec2 = 15;
    int result_pre_dec = --pre_dec2 / 3;
    printf("--pre_dec2 / 3: %d (pre_dec2 is now %d)\n", result_pre_dec, pre_dec2);

    printf("\n--- Mixed Examples ---\n");
    int mix1 = 3;
    int mix_res1 = mix1++ + ++mix1;
    printf("mix1++ + ++mix1: %d (mix1 is now %d)\n", mix_res1, mix1);

    int mix2 = 8;
    int mix_res2 = --mix2 - mix2--;
    printf("--mix2 - mix2--: %d (mix2 is now %d)\n", mix_res2, mix2);

    int i = 0;
    printf("i++ + ++i + i++: %d ", i++); // i becomes 1, prints 0
    printf("+ %d ", ++i);             // i becomes 2, prints 2
    printf("+ %d = %d (i is now %d)\n", i++, 0 + 2 + 2, i); // prints 2, result is 4, i becomes 3

    return 0;
}