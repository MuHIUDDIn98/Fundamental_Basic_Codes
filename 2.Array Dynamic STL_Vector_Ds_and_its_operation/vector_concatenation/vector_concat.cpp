#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> VectorConcat(vector<int> &A,vector<int> &B){

    vector<int> C;

    for(int num: A){
        C.push_back(num);
    }
    for(int num: B){
        C.push_back(num);
    }

return C;
}

int main(){
    int N;
    cout<<"Enter your vector size:"<<endl;
    cin>>N;
    vector<int> A(N);
    vector<int> B(N);

    cout<<"Enter your vector A elements "<<endl;
    for(int i=0; i<A.size(); i++){
        cin>>A[i];
    }

    cout<<"Enter your vector B elements "<<endl;
    for(int i=0; i<B.size(); i++){
        cin>>B[i];
    }

    vector<int>C = VectorConcat(A,B);

    for(int num : C){
        cout<<num<<" ";
    }


    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
