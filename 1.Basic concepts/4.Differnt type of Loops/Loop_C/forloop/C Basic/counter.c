#include<stdio.h>
int main(){

    int counter;
    printf("Counter  before  %d\n",counter);
    for(counter=0;counter<=5; counter++){
        printf("%d\n",counter);
    }
    printf("Counter  after %d\n\n\n",counter);

    int Deccounter=5;
    printf("decCounter  before  %d\n",Deccounter);
    for(Deccounter;Deccounter>=0; Deccounter--){
        printf("%d\n",Deccounter);
    }
    printf("DecCounter  after %d\n",Deccounter);


}