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
        Student students[3];

        // Input information for each student
        for (int i = 0; i < 3; i++) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }
        
        int mx = max({students[0].totalMarks, students[1].totalMarks, students[2].totalMarks});

        int max_count = 0;
        int index[3]={0};

        for(int i=0; i<3; i++){
            if(students[i].totalMarks == mx ){
                index[i]=i;
                max_count++;
            }
        }
    
        
        if(max_count > 1){
            
            sort(index,index+3);
            cout<<endl;
            cout<<students[index[1]].id <<" "<< students[index[1]].name <<" "<< students[index[1]].section <<" "<< students[index[1]].totalMarks<<endl;


        }
        else{
           for(int i=0; i<3; i++){
                if(students[i].totalMarks == mx ){
                cout<<students[i].id <<" "<< students[i].name <<" "<< students[i].section <<" "<< students[i].totalMarks<<endl;
                }
           }
        }
        

        // Output the details of the student with the highest total marks
       
    }

    return 0;
}
