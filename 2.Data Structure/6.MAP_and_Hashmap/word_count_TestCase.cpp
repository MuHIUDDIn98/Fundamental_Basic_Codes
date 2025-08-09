
#include<bits/stdc++.h>
using namespace std;

int main(){


    int T;
    cin >> T;
    cin.ignore();
    while(T--){

        map<string,int> mp;
        pair<string,int> max;
        string sentence;
        getline(cin,sentence);
        string word;
        stringstream ss(sentence);
        
        while(ss>>word){

            mp[word]++;
        }
         max.second = INT_MIN;
        for(auto it= mp.begin(); it !=mp.end(); it++){
           
            if(it->second > max.second){
                max.first = it->first; 
                max.second =  it->second;
            }
        
        }
        cout<<max.first <<"  "<<max.second << endl;

    }
    
    

    return 0;
}