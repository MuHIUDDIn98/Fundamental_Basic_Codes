#include<stdio.h>

int main(){
char str[20]="Reverse Loop";
char str1[20] = "Forward Loop";
printf("%s \t %s\n", str ,str1);
for (int i = 10, j = 1; i >= 1 && j <= 10; i--, j++) {
    printf("%d \t\t %d\n", i, j);
}

int i = 10;
int j = 1;
while (i >= 1 && j <= 10) {
    printf("%d \t\t %d\n", i, j);
    i--;
    j++;
}

return 0;
}