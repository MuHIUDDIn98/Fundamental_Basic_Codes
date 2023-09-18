#include<iostream>
using namespace std;


//Decimal to Hexadecimal string returnd from this function
string DecimalToHexadecimal(int n){
char remainder;
int i;
char hexaDecimalNumber[100];//defining array of string to store hex values 
for(i = 0; n != 0; i++){
    remainder = 0;
    remainder = n % 16;
    if(remainder < 10){
    hexaDecimalNumber[i] = remainder + 48 ; //
    }
    else if(remainder >= 10){
    hexaDecimalNumber[i] = remainder + 55;  //
    }
    n/=16;
    }
string answer ="";
    for(i=i-1;i>=0;i--)
    answer+=hexaDecimalNumber[i];
        
return answer;  
}

//string to Hexadecimal string retruned from this function
string AsciiToHexadecimal(string ASCII){
string HEX = "";

    for(int i = 0; i < ASCII.length(); i++){
    char charecter = ASCII[i];
    int temp = (int)charecter;
    string HexValue = DecimalToHexadecimal(temp);
    HEX = HEX + HexValue;
    }


return HEX;
}










int main(){

string NumbersHexadecimal = DecimalToHexadecimal(26);
string StringHexadecimal = AsciiToHexadecimal("anik");
cout<<NumbersHexadecimal<<endl;
cout<<StringHexadecimal<<endl;




}