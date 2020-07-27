class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> us;
        int startIdx=0,endIdx=0,maxlen=0;
        while(endIdx<s.length()){                   // ynyo // 
            if(!us.count(s[endIdx])){
                us.insert(s[endIdx]);
                if(us.size() > maxlen){
                    maxlen=us.size();
                }
                endIdx++; 
            }
            else{
                us.erase(s[startIdx]);
                startIdx++;
            }
                
        }
        return maxlen;
    }
};