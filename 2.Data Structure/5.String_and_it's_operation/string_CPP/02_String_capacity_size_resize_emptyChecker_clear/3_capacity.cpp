#include<bits/stdc++.h>
using namespace std;

int main(){
   

        string a = "hello anik";
        string s;


        //capacity check
        cout<<"capacity : "<<s.capacity()<<endl;
        s="i am increasing string saize find out string capacity"; //automatically increase capacitiy
        cout<<"capacity : "<<s.capacity()<<endl;
        s="i am increasing string saize find out string capacity || i am increasing string saize find out string capacity"; //automatically increase capacitiy
        cout<<"capacity : "<<s.capacity()<<endl; //dynamically increase string size...
        //string clear 
        s.clear(); //clear string or delete string objects..
        cout<<s<<"s stirng size: "<<s.size()<<endl;



       
    return 0;
}