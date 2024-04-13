#include<bits/stdc++.h>
using namespace std;
void sumation(int i,int sum){
    
    if(i<=0){
        cout<<sum<<endl;
        return ;
    }
    sumation(i-1,sum+i);

}
int main(){
    int i , sum;
    cin>>i>>sum;
    sumation(i,sum);
    return 0;
}