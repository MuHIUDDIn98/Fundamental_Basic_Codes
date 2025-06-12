#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;

    Student(){};

    Student(string name,int roll, int marks){

        this->name = name;
        this->roll = roll;
        this->marks = marks;


    }



};

int main(){
    //dataType arrayName[arraySize];
    int n;
    int min_marks = INT_MAX;
    cin>>n;

    Student str[n];

    for(int i = 0;i < n ; i++){
        cin >> str[i].name >> str[i].roll >> str[i].marks;
        
    }

    cout<<"=============all marks================="<<endl;
    for(int i = 0;i < n ; i++){
        min_marks = min(str[i].marks,min_marks);
        cout<<" "<< str[i].name <<" "<< str[i].roll <<" "<< str[i].marks<<endl;

    }

     cout<<"=============Min marks================="<<endl;
    for(int i = 0;  i < n ; i++){

    
        if(str[i].marks == min_marks){
            cout<<str[i].name<<" "<<"Marks :"<< min_marks << endl;
        }
    }



   
return 0;
}