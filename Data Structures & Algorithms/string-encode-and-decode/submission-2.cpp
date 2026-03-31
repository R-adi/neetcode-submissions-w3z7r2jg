class Solution {
public:

    string encode(vector<string>& strs) {
string s="";
for(auto it:strs){
    s.append(it);
    s.append("@1");
}
return s;
    }

    vector<string> decode(string s) {
        string st;
        vector<string> res;
for(int i=0;i<s.size();i++){
    if(s[i]=='@' && s[i+1]=='1'){
        res.push_back(st);
        cout<<st<<endl;
        st="";
        i=i+1;
        continue;
    }
    st=st+s[i];
}
return res;
    }
};
