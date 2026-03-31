class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v,res;
        map<int,int> mp;

        for(auto it:nums){
            mp[it]++;
        }
        
        multimap<int,int> mp2;
        for(auto it:mp){
            mp2.insert({it.second, it.first});
        }

        for(auto it:mp2){
            v.push_back(it.second);
        }

        int i=v.size()-1;
        while(k!=0){
            res.push_back(v[i]);
            i--;
            k--;
        }
        return res;
    }
};