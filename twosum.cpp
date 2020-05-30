#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int,int> hash;
    vector<int> twoSum(vector<int>& nums, int target) {
        int length= nums.size();
        int x,y;
        for(int i=0;i<length;++i)
        {
                hash.insert({nums[i],i});
        }
        vector<int> ans;
        for(int i=0;i<length;++i)
        {
                if(hash.find(target-nums[i])!= hash.end() && hash.at(target-nums[i])!=i )
                {
                    //cout<<hash.at(nums[i])<<hash.at(target-nums[i]);
                    ans.push_back(hash.at(target-nums[i]));
                    ans.push_back(i);
                   return ans;
                }
        }
         return ans;
    }
};