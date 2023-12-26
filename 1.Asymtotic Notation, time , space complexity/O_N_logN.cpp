#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) // O(Nlog(N))
    {
        int x=i;
        while(x>0)  
        {
            int digit=x%10;
            cout<<digit<<" ";
            x/=10;
        }
        cout<<endl;
    }

    for(int i=n/2; i<=n;i++){  //O(N)
        for(int j = 1; j<= n; j = j*2){ //O(logN)
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}