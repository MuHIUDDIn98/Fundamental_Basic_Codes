#include<iostream>
#include<iomanip> //for printing floating point value
using namespace std; //it is like groupe... cout is located on namespace std

int main(){
    int a,b;
    double c,d;
    char s[50];
    char g[50];

    //integer input 
    std::cout<<"test print using std namespace"<<endl;
    cout<<"Enter your numbers :";
    cin>>a>>b;
    cout<<endl;
    cout<<"a  = "<<a<<" "<<"b = "<<b<<endl;
    
    //float input
    cout<<"Enter your float numbers :";
    cin>>c>>d;
    cout<<endl;

    cout<<"c  = "<<fixed<<setprecision(2)<<c<<" "<<"d = "<<d<<endl;
    
    //string input
    cout<<"Enter your string :"<<endl;
    cin>>s;    //without space input
    cout<<s<<endl;
    cout<<"Enter your string with space :"<<endl;
    cin.getline(g,50);//with space printing 

    return 0;
}