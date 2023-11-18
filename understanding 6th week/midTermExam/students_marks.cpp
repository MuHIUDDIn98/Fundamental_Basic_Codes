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
        int min_obj_id[3]={0};

        for(int i=0; i<3; i++){
            if(students[i].totalMarks == mx ){
              max_count++;
              min_obj_id[i] = students[i].id;
            }
        }
        // for(int i=0; i<3; i++){
        //     cout<<min_obj_id[i]<<endl;
            
        // }
        
        if(max_count > 1){
            sort(min_obj_id,min_obj_id+3);
            
            int small_id = min_obj_id[1];

           for(int i=0; i<3; i++){
            if(small_id == students[i].id){
                cout<<students[i].id <<" "<< students[i].name <<" "<< students[i].section <<" "<< students[i].totalMarks<<endl;
            }
           }

        }
        else if(max_count>2 || max_count == 1){
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
