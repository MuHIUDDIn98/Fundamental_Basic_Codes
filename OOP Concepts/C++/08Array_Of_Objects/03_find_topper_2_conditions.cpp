#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};

int main(){
    //dataType arrayName[arraySize];
    int n;
    cin>>n;

    Student str[n];
    Student topper;
    

    for(int i = 0;i < n ; i++){
        cin >> str[i].name >> str[i].roll >> str[i].marks;   
        
    }

    topper = str[0];
    for(int i=0; i<n; i++){

        if(str[i].marks > topper.marks){
            topper = str[i];
        }
        else if ( topper.marks == str[i].marks ){
             if( str[i].roll< topper.roll){
                topper = str[i];
             }
        }
    }

    cout<<"=========topper =========="<<endl;
    cout<<topper.name <<" "<<topper.marks<<" "<<topper.roll << endl;
return 0;
}