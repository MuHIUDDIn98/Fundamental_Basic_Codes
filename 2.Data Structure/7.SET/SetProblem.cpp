#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    
    int T;
    cin >> T;
    
    while(T--){
    
        int n;
        cin>> n;
        set<int> s;
        
        while(n --){
            
            int val;
            cin >> val;
            s.insert(val);
        }
        
        for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
        }
        
        cout<<endl;
    
             
    }
    

    return 0;
}
