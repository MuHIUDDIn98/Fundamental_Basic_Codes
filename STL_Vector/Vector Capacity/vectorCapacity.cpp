#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    cout<<"Maximum size of a vector :"<<v.max_size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;
    v.push_back(34);
    cout<<"push_back "<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;
    v.push_back(35);
    cout<<"push_back "<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;
    v.push_back(36);
    cout<<"push_back "<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;
    v.push_back(37);
    cout<<"push_back "<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;
    v.push_back(38);
    cout<<"push_back "<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;
    v.push_back(39);
    cout<<"push_back "<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;

    for(int i=0; i<v.size(); i++){
       cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}