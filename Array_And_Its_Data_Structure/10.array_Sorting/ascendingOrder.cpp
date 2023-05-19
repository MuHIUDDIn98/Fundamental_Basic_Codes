#include<iostream>
using namespace std;

int main(){

/*int n;
int arr[n];
cout<<"Enter element number :"<<endl;
cin>>n;
cout<<"Enter your elements :"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"Before sorting :"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
*/
int arr[]={12,14,11,13,1,2,7,5,3,8};

cout<<"Before sorting :"<<endl;
for(int i=0;i<10;i++){
cout<<arr[i]<<" ";
}

for(int i=0; i<10-1;i++){
    for(int j=i+1;j<10;j++){
        if(arr[j]<arr[i]){
    int temp=arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
        }
    }

    }

cout<<"after sorting :"<<endl;
for(int i=0;i<10;i++){
cout<<arr[i]<<" ";
}

}







    
