#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
//     unordered_set<char,int> sett;
//     int lengthOfLongestSubstring(string s) {
//         int len=s.length();
//         // for(int i=0;i<len;i++)
//         // {
//         //     hash[s[i]]++;
//         // }
//         int currlen=0,maxlen=INT_MIN;
//         for(int i=0;i<len;i++)
//         {
//             hash[s[i]]++;
//             if(hash[s[i]]<2)
//             {
//                 currlen+=1;
//             }
//             if(currlen>maxlen)maxlen=currlen;
//             if(hash[s[i]]>=2)
//             {
//                 hash[s[i-currlen]]--;
//                 // currlen-=1;
//             }

//         }
//         return maxlen;
    // }
    
    unordered_set<char> st;
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxlen=0;
        int len=s.length();

        while(r<len)
        {
            if(st.find(s[r])!=st.end())
            {
                st.erase(s[l]);
                l++; //bugfixx

            }
            else
            {
                st.insert(s[r]); 
                if(maxlen<st.size())
                {
                    maxlen=st.size();    
                }
                r++;
            }
            
        }
        
        
        return maxlen;
    }

    
};