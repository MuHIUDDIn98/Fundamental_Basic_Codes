#include<bits/stdc++.h>
using namespace std;


int main(){
    
    list<int>mylist1 = {20,10,30,20,10,30,40,50,40,50};
    //element access 
    cout<<"front value :"<<mylist1.front()<<endl;
    cout<<"back vlue :"<<mylist1.back()<<endl;
    cout<<"index 3: "<<*next(mylist1.begin(),3)<<endl;
   
return 0;
}