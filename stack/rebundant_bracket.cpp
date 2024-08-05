#include <bits/stdc++.h> 
using namespace std;

bool findRedundantBrackets(string &s)
{
    //create a empty stack 
    stack<char> st;

    for(int i = 0 ; i < s.length() ; i++){
       
        char ch = s[i];

        if((ch == '(') || (ch == '+') || (ch == '-') || (ch == '*') || (ch == '/')){
            st.push(ch);
        }else{
            if(ch == ')'){
                if(st.top() == '('){
                    return true;
                }else{
                    while(st.top() != '('){
                        st.pop();
                    }
                    st.pop();
                }
            }
        }
    }
    return false;
}
