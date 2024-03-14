#include<iostream>
using namespace std;
class Solution {

private:
    bool check_equal(char count1[26],char count2[26]){
            for(int i = 0;i<26;i++){
                if(count1[i] != count2[i]){
                    return 0;
                }
                
            }
            return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        char count1[26] = {0};
        //character count array
        for(int i=0;i<s1.length();i++){
            char ch = s1[i];
            int index = ch -'a';
            count1[index]++;
        }

        //running for first window
        int i = 0;
        int window_size = s1.length();
        char count2[26] = {0};

        while(i<window_size && i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }


        if(check_equal(count1,count2))
            return 1;
        

        //aage window process karo 
        
        while(i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;

            index =s2[i-window_size]-'a';
            count2[index]--;
            i++;

            if(check_equal(count1,count2)){
                return 1;
            }
        }

        return 0;

    }
};

int main(){

    Solution s;
    string str1 ,str2;

    cout<<"enter the string 1 : ";
    cin>>str1;
    
    cout<<"enter the string 2 : ";
    cin>>str2;
    
    cout<<"string 1 : "<<str1<<endl;
    cout<<"string 2 : "<<str2<<endl;

    cout<<s.checkInclusion(str1,str2);  //return 1 if permutation of string 1 is present else return 0
}