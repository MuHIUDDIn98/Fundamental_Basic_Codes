#include <stdio.h>

int main() {
    int M1,M2,D;
    int testCase;
    scanf("%d",&testCase);
    while(testCase--){
    scanf("%d %d %d",&M1,&M2,&D);
    int New_days= (M1*D)/(M1+M2);
    int fewer_days = D - New_days;

    printf("%d\n",fewer_days);

    }

   
    return 0;
}