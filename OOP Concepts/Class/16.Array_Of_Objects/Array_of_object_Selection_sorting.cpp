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

   cout<<"printing array of objects.. befour sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<s[i].name<<"  "<<s[i].roll<<" "<<s[i].marks<<"  "<<endl;
    }

   for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(s[i].marks == s[j].marks){
             if(s[i].roll>s[j].roll){
            swap(s[i],s[j]);
        }
        }
        if(s[i].marks>s[j].marks){
            swap(s[i],s[j]);
        }
    }
   }


    cout<<"printing after sorting.."<<endl;
    for(int i=0; i<n; i++){
        cout<<s[i].name<<"  "<<s[i].roll<<" "<<s[i].marks<<"  "<<endl;
    }

    return 0;
}