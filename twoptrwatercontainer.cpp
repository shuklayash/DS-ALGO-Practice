#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int area=INT_MIN;

        while(l<r)
        {
//             if(height[l+1]>height[l])
//             {
//                 l++;
//                 if(area>min(height[l],height[r])*(r-l)%10000008)
//                 area=min(height[l],height[r])*(r-l);
//             }
//             else if(height[r-1]>height[r])
//             {
//                 r--;
//                 if(area>min(height[l],height[r])*(r-l)%100000008)
//                 area=min(height[l],height[r])*(r-l);          
//             }
            area=max(area,(r-l)*min(height[l],height[r]));
            if(height[l]<height[r])
            {
                l++;
            }
            else
                r--;

        }
         
        return area;
        
    }
};