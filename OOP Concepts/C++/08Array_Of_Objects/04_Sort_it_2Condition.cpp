#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name ;
    int clas;
    char section ;
    int id;
    int math_marks ;
    int eng_marks ;
    int total ;

};

bool customCompare(Student l, Student r){
    
    if(l.total == r.total){

        return l.id < r.id;
    }
     return l.total > r.total;


}


int main(){
    
    // Write your code here
    int N;

    cin>>N;
    Student St[N];
    for(int i=0; i<N; i++){
        cin>>St[i].name>>St[i].clas>>St[i].section>>St[i].id>>St[i].math_marks>>St[i].eng_marks;
        St[i].total = St[i].math_marks+St[i].eng_marks;       
    }

    sort(St,St+N,customCompare);

    for(int i=0; i<N; i++){
        cout<<St[i].name<<" "<<St[i].clas<<" "<<St[i].section<<" "<<St[i].id<<" "<<St[i].math_marks<<" "<<St[i].eng_marks<<endl;       
    }

    return 0;
}