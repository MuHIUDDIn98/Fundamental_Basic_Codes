#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;

};

bool cmp(Student l, Student r){


    return l.marks < r.marks;
}


int main(){
    //dataType arrayName[arraySize];
    int n;
    cin>>n;

    Student str[n];

    for(int i = 0;i < n ; i++){
        cin >> str[i].name >> str[i].roll >> str[i].marks;
        
    }

    cout<<"=============all marks================="<<endl;
    for(int i = 0;i < n ; i++){
        cout<<" "<< str[i].name <<" "<< str[i].roll <<" "<< str[i].marks<<endl;

    }

    sort(str,str+n,cmp);

    cout<<"=============After sorting all marks================="<<endl;
    for(int i = 0;i < n ; i++){
        cout<<" "<< str[i].name <<" "<< str[i].roll <<" "<< str[i].marks<<endl;

    }

    
    



   
return 0;
}