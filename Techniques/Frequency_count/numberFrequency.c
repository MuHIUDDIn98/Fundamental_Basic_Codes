#include<stdio.h>

int main(){

    int arraySize;
    int NumberRange;

    scanf("%d %d", &arraySize, &NumberRange);

    int array[arraySize];
    int arraySizeAdjust = NumberRange + 1;
    int FrequencyArray[arraySizeAdjust];

    for (int i = 0; i < arraySizeAdjust; i++) {
        FrequencyArray[i] = 0;
    }

    for(int i = 0; i < arraySize; i++){
        scanf("%d", &array[i]);
        if (array[i] >= 0 && array[i] < arraySizeAdjust) {
            FrequencyArray[array[i]]++;
        }
    }

    for(int i = 0; i < arraySizeAdjust; i++){ // Loop from 0 to NumberRange
       
       if(FrequencyArray[i]>0){

        printf("%d\n", FrequencyArray[i]); // Print frequency for each number in the range [0, NumberRange]

       }
        
    }

    return 0;
}