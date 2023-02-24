#include<iostream>
using namespace std;

main(){

//&&
//||
// !
//toupper()
//tolower()
//===========================||=============================
/*char ch;
cout<<"Enter your charecter=";
cin>>ch;

ch=tolower(ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){

        ch=toupper(ch);
   cout<<ch<<" is vowel"<<endl;

}
else{
    ch=toupper(ch);
    cout<<ch<<" is consonent"<<endl;
}
*/
//===========================&&=====================================

/*int num1,num2,num3;
cout<<"Enter your numbers=";
cin>>num1>>num2>>num3;

if(num1>num2 &&num1>num3)
{

    cout<<num1<<" is the greatest number";
}
else if(num2>num1 && num2>num3){
    cout<<num2<<" is the greatest number";

}else if(num3>num2 && num3>num1)
{

    cout<<num3<<" is the greatest number";
}

 /* int large;
if(num1>num2 &&num1>num3)
{
     large=num1;
}
else if(num2>num1 && num2>num3){
    large=num2;

}else
{

   large=num3;
}

cout<<"large number is ="<<large;*/


//=================leap year c++(&& and ||)=========================
int year;

cout<<"Enter your yera=";
cin>>year;

if((year%4==0&&year%100!=0)||year%400==0){

   cout<<year<<" is leap year" <<endl;
}
else{
    cout<<year<<"is not leap year";
}

}
