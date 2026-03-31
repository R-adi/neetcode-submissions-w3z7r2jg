class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        vector<vector<string>> res;
        for(auto it:strs){
            string k=it;
            sort(k.begin(),k.end());
            mp[k].push_back(it);
        }
        for(auto it:mp){
            res.push_back(it.second);
        }
       return res;

    }
};
