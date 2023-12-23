  #include<bits/stdc++.h>
  using namespace std;
  
  bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(c == ')' && st.top() == '(' ){
                    st.pop();
                }
                else if(c == '}' && st.top() == '{' ){
                    st.pop();
                }
                else if(c == ']' && st.top() == '[' ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
      return st.empty();  
    }

  int main(){
    string s;
    cin>>s;
    if(isValid(s)){
       cout<<"valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
      return 0;
  }
    