#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
      int roll; 
      double marks;

    
};
bool cmp(Student a, Student b){
    
    if(a.marks == b.marks){      
        return a.roll<b.roll;
    }
    else{
        return a.marks > b.marks;
    }
     
    }

int main(){
    int n;
    cin>>n;
    Student s[n];

    for(int i=0; i<n; i++){
        
       
        cin>>s[i].name>> s[i].roll >> s[i].marks;
    }

   cout<<"printing array of objects.. befour sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<s[i].name<<"  "<<s[i].roll<<" "<<s[i].marks<<"  "<<endl;
    }

   sort(s,s+n,cmp);

    cout<<"printing after sorting.."<<endl;
    for(int i=0; i<n; i++){
        cout<<s[i].name<<"  "<<s[i].roll<<" "<<s[i].marks<<"  "<<endl;
    }

    return 0;
}