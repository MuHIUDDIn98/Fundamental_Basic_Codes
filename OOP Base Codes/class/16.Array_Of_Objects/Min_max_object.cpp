#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
      int roll; 
      double marks;
};

int main(){
    int n;
    cin>>n;
    Student s[n];

    for(int i=0; i<n; i++){
        
       
        cin>>s[i].name>> s[i].roll >> s[i].marks;
    }


    for(int i=0; i<n; i++){
        cout<<s[i].name<<"  "<<s[i].roll<<" "<<s[i].marks<<"  "<<endl;
    }

    Student mx;
    mx.marks = INT_MIN;
    Student min;
    min.marks = INT_MAX;

    for(int i=0; i<n; i++){
        if(mx.marks < s[i].marks){
            mx.marks = s[i].marks;
            mx = s[i];
        }
    }

    for(int i=0; i<n; i++){
        if(min.marks > s[i].marks){
            min.marks = s[i].marks;
            min = s[i];
        }
    }

    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    cout<<min.name<<" "<<min.roll<<" "<<min.marks<<endl;

    return 0;
}