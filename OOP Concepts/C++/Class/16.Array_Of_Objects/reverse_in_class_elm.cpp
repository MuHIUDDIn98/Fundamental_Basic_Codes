#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int clas;
    char section;
    int id;

};

int main(){
    int N;

    cin>>N;
    Student St[N];
    for(int i=0; i<N; i++){
        cin>>St[i].name>>St[i].clas>>St[i].section>>St[i].id;       
    }
     
    int l=0;
    int r = N-1;
    while(l<r){
        swap(St[l].section,St[r].section);
        l++;
        r--;
    }

    for(int i=0; i<N; i++){
        cout<<St[i].name<<" "<<St[i].clas<<" "<<St[i].section<<" "<<St[i].id<<endl;       
    }

    return 0;
}