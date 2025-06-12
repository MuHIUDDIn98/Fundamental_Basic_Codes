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
    Student mn;
    mn.marks = INT_MAX;

    for(int i = 0;i < n ; i++){
        cin >> str[i].name >> str[i].roll >> str[i].marks;
        if(str[i].marks <mn.marks){
            mn = str[i];
        }
        
    }

    
     cout<<"=============Min marks================="<<endl;
     cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
  
return 0;
}