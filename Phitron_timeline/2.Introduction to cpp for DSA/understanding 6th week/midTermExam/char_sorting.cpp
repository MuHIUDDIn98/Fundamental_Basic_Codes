#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    
   while( getline(cin,s)){

        string Without_space = ""; //to store char without space..

        for(int i=0; i<s.length(); i++){
            if(s[i]>='a' && s[i]<='z'){
                Without_space+=s[i];
            }
        }
        

        int integer_value[Without_space.length()]; //creating integer array for storing equivalent char
        
        for(int i=0; i<Without_space.length(); i++){
            
                integer_value[i] = Without_space[i];
        }


        //sorting asending order....
        sort(integer_value,integer_value+(Without_space.length()));

        for(int i=0; i<Without_space.length(); i++){
            
                Without_space[i] = integer_value[i]; 
        }


        for(int i=0; i<Without_space.length(); i++){
            
                cout<<Without_space[i]; 
        }

        cout<<endl;
   }

}

    