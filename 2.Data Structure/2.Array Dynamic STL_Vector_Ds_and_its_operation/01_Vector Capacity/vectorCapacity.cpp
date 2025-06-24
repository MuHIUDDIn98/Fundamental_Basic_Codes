#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    cout<<"Maximum size of a vector :"<<v.max_size()<<endl;  //O(1)
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;                     //O(1)


    cout<<"=====push_back========= "<<endl;
    v.push_back(34); 
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;

    

    cout<<"=====push_back========= "<<endl;
    v.push_back(35);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;



    cout<<"push_back "<<endl;
    v.push_back(36);   
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;


    cout<<"=====push_back========= "<<endl;
    v.push_back(37);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;

    cout<<"=====push_back========= "<<endl;
    v.push_back(38);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;

    cout<<"=====push_back========= "<<endl;
    v.push_back(39);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size of v: "<<v.size()<<endl;


    cout<<"=====Show all elements========= "<<endl;
    for(int i=0; i<v.size(); i++){
       cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}