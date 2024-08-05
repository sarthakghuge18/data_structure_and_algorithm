#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
       stack<int>s;
       
       
       //push all element in stack
       for (int i = 0 ; i < mat.size() ; i++){
           s.push(i);
       }
       
       //step - 2 get two element and compare it
       while(s.size() > 1){
           
           int a = s.top();
           s.pop();
           
           int b = s.top();
           s.pop();
           
           if(mat[a][b] == 0){
               s.push(a);
           }
           
           if(mat[b][a] == 0){
               s.push(b);
           }
       }
       
       //step - 3 single element remain in stack 
       
       int single = s.top();
       
       //row check
       for(int i = 0 ; i < mat.size() ; i++){
           if(mat[single][i] == 1){
               return -1;
           }
       }
       
       //column check 
      for(int i = 0 ; i < mat.size() ; i++){
          if(i !=single && mat[i][single] == 0){
              return -1;
          }
      }
       return single;
       
    }
};