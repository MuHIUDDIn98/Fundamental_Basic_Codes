#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;

    // যদি কোনো ক্লাসে কনস্ট্রাক্টর ডিফাইন করা থাকে এবং সেই কনস্ট্রাক্টরে প্যারামিটার প্রয়োজন হয়, 
    // তাহলে সরাসরি অবজেক্টের অ্যারে ডিক্লেয়ার করা সম্ভব নয়। কারণ প্যারামিটার ছাড়া কনস্ট্রাক্টর কল করা সম্ভব হবে না।
    // যদি আমরা Student a[5]; ব্যবহার করি, তবে এটি কোনো আর্গুমেন্ট ছাড়াই পাঁচটি Student অবজেক্ট তৈরি করার চেষ্টা করবে,
    // যা কনস্ট্রাক্টরের অভাবে কম্পাইল-টাইম ত্রুটি সৃষ্টি করবে। এই কারণে, প্যারামিটারযুক্ত কনস্ট্রাক্টর থাকা অবস্থায় এমন অ্যারে সরাসরি ডিক্লেয়ার করা সম্ভব নয়।


};

int main(){
    //dataType arrayName[arraySize];
    int n;
    cin>>n;

    Student str[n];

    for(int i = 0;i < n ; i++){
        cin >> str[i].name >> str[i].roll >> str[i].marks;

    }


    for(int i = 0;i < n ; i++){
        cout<<" "<< str[i].name <<" "<< str[i].roll <<" "<< str[i].marks<<endl;

    }

   
return 0;
}