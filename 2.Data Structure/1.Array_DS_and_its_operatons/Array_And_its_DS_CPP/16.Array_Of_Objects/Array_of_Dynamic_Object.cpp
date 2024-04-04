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
    //int *s = new int[n]; 
    Student *s = new Student[n]; //dynamci object array created....
    for(int i=0; i<n; i++){
        
        cin.ignore();
        getline(cin, s[i].name);
        cin>> s[i].roll >> s[i].marks;
    }
    for(int i=0; i<n; i++){
        cout<<s[i].name<<"  "<<s[i].roll<<s[i].marks<<"  "<<endl;
    }

    return 0;
}