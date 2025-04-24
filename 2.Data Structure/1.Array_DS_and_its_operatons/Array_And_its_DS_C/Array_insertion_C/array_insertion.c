#include<stdio.h>
int main(){

   int n;
   int index;
   int val;
   scanf("%d",&n);
   int arr[n+1];

   for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);

   }
   printf("\n\n");
   for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
   }
   
   printf("\n\n\n\n");
   scanf("%d %d",&index,&val);

   for(int i=n; i>=index; i--){
   
     arr[i] = arr[i-1];
     printf("arr[%d] = arr[%d]\n",i,i-1);
   }
   printf("\n\n");
   for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
   }

   arr[index] = val;

   printf("\n\n");
   for(int i=0; i<=n; i++){
    printf("%d ",arr[i]);
   }


    return 0;
}