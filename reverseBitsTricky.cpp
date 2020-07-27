#include<math.h>
class Solution {
public:
    int i=0;
    uint32_t reverseBits(uint32_t n) {
//         // recursion to get to the last of the bits by anding it with 1 = 0000000000000000000001 
//         //so it will set the last bit info in it 
//         //return this info recursively 
//         if(n==0){
//             return 0;
//         }
//         reverseBits(n&pow(2,i+1));// where i reperesents number 2^p 0 1 2 4 8 16 32 64 . . . 
        
         // alternate we can try to iterate to get info of bits 
        /*
            uint32_t reverseBits(uint32_t n) {
        n = (n >> 16) | (n << 16);
        n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
        n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
        n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
        n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
        return n;
        */
        //NO BRAINER SOLN BELOW |
        //                      ! 
//         if(n==0)return 0;
//         vector<bool> bitval;
//         while(n!=0){
//             bitval.push_back(n&1);
//             n=n>>1;
//         }
//         for(auto i : bitval){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//         reverse(bitval.begin(),bitval.end());
        
//          for(auto i : bitval){
//             cout<<i<<" ";
//         }
//         uint32_t ans=0;
//         for(int i=32;i>=0;i--){
//             if(i<=bitval.size())
//             ans=ans +(uint32_t)bitval[i]*pow(2,i);
            
//         }
//         for(int i=bitval.size();i<32;i++){
//             ans=ans<<1;
//         }
        uint32_t ans=0,p=31;
        while(n!=0){
            ans += (n&1) << p;
            p--;
            n=n>>1;
        }
        
        return ans;
    }
};