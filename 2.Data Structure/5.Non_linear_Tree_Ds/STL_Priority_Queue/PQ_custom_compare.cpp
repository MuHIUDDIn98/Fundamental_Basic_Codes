#include<bits/stdc++.h>
using namespace std;



class Student{
    public:
        string name;
        int roll;
        int marks;

  

    Student(string name, int roll, int marks){

        this->name = name;
        this->roll = roll;
        this->marks = marks;

    }

};

class cmpMinMarks {
    public :
        bool operator()(Student l, Student r){

            if(l.marks != r.marks)
                return l.marks > r.marks;
            else   
                return l.roll > r.roll;

        }
};


class cmpMaxMarks {
    public :
        bool operator()(Student l, Student r){

            if(l.marks != r.marks)
                return l.marks < r.marks;
            else   
                return l.roll < r.roll;

        }
};

int main(){
    
    priority_queue<Student,vector<Student>,cmpMinMarks> pqMin;
    priority_queue<Student,vector<Student>,cmpMaxMarks> pqMax;

    int n;
    cout<<"Enter student number : ";
    cin>>n;

    for(int i = 0 ; i<n; i++){

        int roll,marks;
        string name;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pqMin.push(obj);
        pqMax.push(obj);
    }

    cout<<"===================Min heap=============================="<<endl;
    while(!pqMin.empty()){
        cout<<pqMin.top().marks <<" "<<pqMin.top().roll<< " "<<pqMin.top().name<<endl;
        pqMin.pop();
    }

    cout<<"======================Max Heap==========================="<<endl;

    while(!pqMax.empty()){
        cout<<pqMax.top().marks <<" "<<pqMax.top().roll<< " "<<pqMax.top().name<<endl;
        pqMax.pop();
    }

   
return 0;
}