#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int clas;
    char section;
    int math_marks=0,eng_marks=0;
     int id=0;
    

};

bool cmp(Student a, Student b){
    if(a.eng_marks>b.eng_marks){
       return true;
    }
    else if(a.eng_marks<b.eng_marks){
        return false;
    }
    else if(a.math_marks>b.math_marks){
        return true;
    }
    else if(a.math_marks<b.math_marks){
        return false;
    }
    else {
        return a.id<b.id;
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