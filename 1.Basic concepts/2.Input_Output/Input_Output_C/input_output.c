#include<stdio.h>

int main(){

    int num;
    float float_num;
    char c ;
    char str[20];

    printf("Enter an interger: ");
    scanf("%d", &num);
    printf("num = %d\n",num);

    printf("Enter a float number: ");
    scanf("%f", &float_num);
    printf("float_num = %.2f\n", float_num);

    printf("Enter a character: ");
    scanf(" %c", &c); // Note the space before %c to consume any leftover newline character
    printf("c = %c\n", c);

    printf("Enter a string: ");
    scanf("%s", str); // Note: This will read until the first whitespace
    printf("str = %s\n\n\n", str);  // Be cautious with buffer overflow; consider using fgets for safer input

    printf("take multiple varable as input \n");
    printf("Enter an integer and a float: ");
    scanf("%d %f", &num, &float_num);
    printf("num = %d, float_num = %.2f\n", num, float_num);

}