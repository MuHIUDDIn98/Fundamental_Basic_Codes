#include <stdio.h>
int main()
{
    int a = 0, i;
    printf("'i'\t'a'\n");
    for (i = 0;i < 5; i++)
    {
        a++;
        printf("%d \t %d\n",i,a);
        continue;
    }
    printf("%d %d",i,a);
    return 0;
}
//find output