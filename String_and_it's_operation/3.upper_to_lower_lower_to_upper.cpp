#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*A=65 ,a=97  ,97-65=32
B=66,b=98 , 98-66=32 */

void lower_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			str[i] = str[i] + 32;         //converting uppercase to lowercase
	}
	cout<<"\n The string in lower case: "<< str;
}


void upper_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   //checking for lowercase characters
			str[i] = str[i] - 32;        //converting lowercase to uppercase
	}
	cout<<"\n The string in upper case: "<< str;
} 


int main(){
string A1;
string str;
cout<<"Enter your string here:"<<endl;
getline(cin,str);
lower_string(str);
upper_string(str);
cout<<endl;
cout<<"Enter your string here:"<<endl;
getline(cin,A1);
transform(A1.begin(), A1.end(), A1.begin(), ::toupper);
    cout<<A1<<endl;
transform(A1.begin(), A1.end(), A1.begin(), ::tolower);
    cout<<A1<<endl;


}