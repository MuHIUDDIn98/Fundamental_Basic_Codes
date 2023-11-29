#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    
    v.push_back(34);
    v.push_back(35);
    v.push_back(36);
    v.push_back(37);
    v.push_back(38);
    v.push_back(39);

    for(int i=0; i<v.size(); i++){
       cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();//when ever we use clear v.size()  will be 0 but memory remain same....
    cout<<"Size of vecotr :"<<v.size()<<endl;
    cout<<"After clear:"<<endl;

    for(int i=0; i<v.size(); i++){
       cout<<v[i]<<" ";
    }
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    return 0;
}