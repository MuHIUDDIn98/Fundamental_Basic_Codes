#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

class student {
    int age;
    string first_name , last_name;
    int standard;
    string str;
    public:
        void set_age(int a){
            age = a;
        }
        void set_standard(int st){
            standard = st;
        }
        void set_first_name(string s){
            first_name = s;
        }
        void set_last_name(string s){
            last_name = s;
        }
        int get_age(){
            return age;
        }
        string get_last_name(){
            return last_name;
        }
         int get_standard(){
            return standard;
        }
       string get_first_name(){
            return first_name;
        }
        string to_string(){
            stringstream s;
            s << age  << "," << first_name << "," << last_name   << "," << standard;
            s >> str;
            return str;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    student st;
    st.set_age(12);
    st.set_standard(345);
    st.set_first_name("anik");
    st.set_last_name("Ahmed");
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    return 0;
}