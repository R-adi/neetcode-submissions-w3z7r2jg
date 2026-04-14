class Solution {
public:
    bool isPalindrome(string s) 
    {
        int l=0,r=s.size()-1;
        while(l<r){
            if(tolower(s[l])==tolower(s[r])){
                r--;
                l++;
            }
            else if((tolower(s[l])<'a' || tolower(s[l])>'z') && (s[l]>'9' || s[l]<'0')){
                l++;
            }
            else if(tolower(s[r])<'a' || tolower(s[r])>'z' && (s[r]>'9' || s[r]<'0')){
                r--;
            }
            else{
                return false;
            }
        } 
        return true; 
    }
};
