#include<stdio.h>


int main(){

     int testCase;
     
     scanf("%d",&testCase);
   
     while(testCase--){
        int sz;
        scanf("%d",&sz);

        char r_s[sz+1]; // for  '\0'
        scanf("%s",r_s);
        
        //winer counter 
        int tiger_win_count=0,pathan_win_count=0;
        //counting T and P 
        for(int i=0; i<sz; i++){
         if(r_s[i]== 'T') tiger_win_count++;
         else if(r_s[i]=='P') pathan_win_count++;
        }

        //checking counter value and display 
        if(tiger_win_count>pathan_win_count)
           printf("Tiger\n");
        else if(pathan_win_count>tiger_win_count)
           printf("Pathaan\n");
        else
           printf("Draw\n");


     }
    return 0;
}