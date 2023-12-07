#include<bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    string name;
    char section;
    int totalMarks;
};

int main() {
    int T;
    cin >> T;

    while(T--) {
        Student student1,student2,student3;
        cin>>student1.id>>student1.name>>student1.section>>student1.totalMarks;
        cin>>student2.id>>student2.name>>student2.section>>student2.totalMarks;
        cin>>student3.id>>student3.name>>student3.section>>student3.totalMarks;

        int mx = max({student1.totalMarks,student2.totalMarks,student3.totalMarks});


       if(student1.totalMarks == mx ){
        cout<< student1.id<< " "<< student1.name <<" "<< student1.section <<" "<< student1.totalMarks;
        cout<<endl;
       }
       else if(student2.totalMarks == mx){
        cout<<" "<< student2.id <<" "<< student1.name <<" "<< student2.section <<" "<< student2.totalMarks;
        cout<<endl;
       }
       else if(student3.totalMarks == mx){
        cout<<" "<< student3.id <<" "<< student3.name <<" "<< student3.section <<" "<< student3.totalMarks;
        cout<<endl;
       }
   
    
    }

    return 0;
}
