#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    struct comp
    {
        template<typename T>
        bool operator()(const T& l, const T& r) const
        {
            if (l.second != r.second)
                return l.second > r.second;

            return l.first < r.first;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int len=nums.size();
        unordered_map<int,int> ump;
        for(int i=0;i<len;i++)
        {
            ump[nums[i]]++;
        }
        set<pair<int,int>, comp> ss(ump.begin(), ump.end());
        
        vector<int> ans;
        int i=0;
        for(auto pair: ss)
        {
            if(i>=k)
            {  
                break;
            }
            else
            {
                ans.push_back(pair.first);
                // cout<<pair.first<<" ";
            }
            i++;
        }
    return ans;
    }
};