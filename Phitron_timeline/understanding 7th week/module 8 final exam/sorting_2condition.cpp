#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int clas;
    char section;
    int math_marks=0,eng_marks=0;
     int id=0;
    
    int total_marks() {
     return math_marks + eng_marks;
    } 
   

};

bool cmp(Student a, Student b){
    if(a.total_marks() == b.total_marks()){
        return a.id<b.id;
    }
    else{
     return a.total_marks()>b.total_marks();
    }
    
}

int main(){
    int N;

    cin>>N;
    Student St[N];
    for(int i=0; i<N; i++){
        cin>>St[i].name>>St[i].clas>>St[i].section>>St[i].id>>St[i].math_marks>>St[i].eng_marks;       
    }

   sort(St,St+N,cmp);
     

    for(int i=0; i<N; i++){
        cout<<St[i].name<<" "<<St[i].clas<<" "<<St[i].section<<" "<<St[i].id<<" "<<St[i].math_marks<<" "<<St[i].eng_marks<<endl;       
    }

    return 0;
}