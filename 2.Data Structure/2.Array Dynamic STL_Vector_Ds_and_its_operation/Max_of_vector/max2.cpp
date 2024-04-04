#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> x ={1,2,3,6,5,4,7,9};

    int largest = 0;
    for(int num : x){
        if(num > largest){
            largest = num;
        }
    }

    cout<<largest<<endl;

    return 0;
}