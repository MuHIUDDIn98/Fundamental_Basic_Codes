#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {11,12,13,24,15,3};
    vector<int> ans;
    int target = 14;
    unordered_map<int,int> mp;
    for(int i=0; i<v.size(); i++){
        if(mp.find(target-v[i]) != mp.end()){
            ans.push_back(i);
            ans.push_back(mp[target-v[i]]);
        }
        else{
            mp[v[i]] = i;
        }

    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }




    return 0;
}