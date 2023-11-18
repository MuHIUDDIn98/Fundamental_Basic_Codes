#include<bits/stdc++.h>
using namespace std;

int two_add(int c,int d){   //pass by value

    return c+d;
}


void swap_two(int *a, int *b){ //pass by address
    //formal parameter 
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


void swap_two2(int &x, int &y){ //pass by reference
    cout<<"x :"<<x<<"   addr :"<<&x<<"   "<<" y:"<<y<<"   addr : "<<&y<<endl;
    int temp;
    temp = x;
    x = y;
    y = temp;

}

int main(){


    int a,b;
    cin>>a>>b;
    cout<<"a :"<<a<<" b:"<<b<<endl;
    swap_two(&a,&b); //acctual parameter
    cout<<"a :"<<a<<" b:"<<b<<endl;


    int c,d;
    cin>>c>>d;
    cout<<"c:"<<c<<"  d:"<<d<<endl;
    int addition = two_add(c,d);//actual parameter..
    cout<<"addition :"<<addition<<endl;

    int e,f;
    cin>>e>>f;
    cout<<"e :"<<e<<"   addr :"<<&e<<"   "<<" f:"<<f<<"   addr : "<<&f<<endl;
    swap_two2(e,f); //acctual parameter
    cout<<"e :"<<e<<"   addr :"<<&e<<"   "<<" f:"<<f<<"   addr : "<<&f<<endl;
    cout<<"e :"<<e<<" f:"<<f<<endl;


    return 0;
}