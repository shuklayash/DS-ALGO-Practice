#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void recur(vector<char>& s,int i,int j)
    {
        if(i<j){
            char temp = s[i];
            s[i]=s[j];
            s[j]=temp;
            recur(s,i+1,j-1);
            
        }
        

    }
    void reverseString(vector<char>& s) {
//         if(!*s)
//         {
//             return ;
//         }
//         reverseString(s+1);
//         //current value in *s;
        recur(s,0,s.size()-1); //helper function
    }
};