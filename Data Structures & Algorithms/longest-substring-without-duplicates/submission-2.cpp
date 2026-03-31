class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m = 0, sr = 0;
        set<char> st;
        
        for(int i = 0; i < s.size(); i++) {
            // While duplicate exists, remove from the left (sr)
            while(st.find(s[i]) != st.end()) {
                st.erase(s[sr]);
                sr++;
            }
            
            st.insert(s[i]);
            
            m = max(m, i - sr + 1);
        }
        return m;
    }
};
