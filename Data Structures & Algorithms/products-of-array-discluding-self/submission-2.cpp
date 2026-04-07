class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
vector<int> pre,suf;
int n=nums.size();

pre.push_back(1);
for(int i=0;i<nums.size()-1;i++){
    pre.push_back(nums[i]*pre[i]);
}

suf.push_back(1);
for(int i=0;i<nums.size()-1;i++){
    suf.push_back(nums[n-i-1]*suf[i]);
}
for(int i=0;i<nums.size();i++){
   pre[i]=pre[i]*suf[n-i-1];
}

return pre;




    }
};
