#include<iostream>
using namespace std;

main()
{

//what is statement?
//any meaning full expression is called statement

//selection control statement  (if,else if,elase,switch)
//looping or itiration      (for loop,while,do_while)
//jump statement         (continue,break, return)



    int num,marks;

    cout<<"enter your number=";
    cin>>num;
    if(num>0)
    {
        cout<<num<<" is positive interger"<<endl;
    }
    else if (num<0)
    {
        cout<<num<<" is negetive interger"<<endl;
    }
    else
    {
        cout<<num<<" is zero";
    }
//==================marks=========================

    cout<<"Enter your marks= ";
    cin>>marks;
    if(marks>=33)
    {
        cout<<"you are passed"<<endl;



    }
    else if(marks<=33)
    {
        cout<<"You are failed ,try again next time"<<endl;
    }


    /*===========================absolute value=====================================*/
   cout<<"Enter your number to get absolute value=";
   cin>>num;
   if(num<0)
   {
       cout<<"absolute value of "<<num<<"is= "<<(-num)<<endl;

   }
   else{
    cout<<"absolute value of "<< num<<" is= "<<num<<endl;
   }

}


