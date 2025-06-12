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
    Student mx;
    mx.marks = INT_MIN;

    for(int i = 0;i < n ; i++){
        cin >> str[i].name >> str[i].roll >> str[i].marks;
        if(str[i].marks > mx.marks){
            mx = str[i];
        }
        
    }

    
     cout<<"=============Max marks================="<<endl;
     cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
  
return 0;
}