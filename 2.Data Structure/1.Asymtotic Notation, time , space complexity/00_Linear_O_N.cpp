#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;
    int sum = 0;
    for(int i=1; i<=x; i++){  //O(N)

        sum += i;
    }
    cout<<"sum of x = "<<sum<<endl;


    int sum2 = (x*(x+1))/2; //O(1)

    cout<<"sum of x = using formula "<<sum2<<endl;



    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) // O(N)
    {
        cin >> a[i];
    }


    int s = 0;
    for(int i=0; i<n; i += 2) // O(N)
    {
        s += a[i];
    }
    cout<<s<<endl;
    return 0;
}