#include<iostream>
using namespace std;

int main(){

char A[100]="How    are you"; // with spaces
int i, word=0;

for(i=0; A[i]!='\0'; i++){
if(A[i] == ' ' && A[i-1]!=' '){

    word++;
}

}

cout << "total words of this string is : " << word+1 << endl;



return 0;
}