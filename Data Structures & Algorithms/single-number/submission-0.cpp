class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
     int c=0;
     for(auto t:nums){
        c=c^t;
     }   
     return c;
    }
};
