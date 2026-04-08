class Solution {
public:
    bool isHappy(int n) {
        int c=0;
        set<int> s;
        while(true){
             while(n>0){
            int p=n%10;
            c=c+(p*p);
            n=n/10;
        }
        if(c==1){
            return true;
        }
        if(s.find(c)!=s.end()){
            break;
        }
        else{
            s.insert(c);
        }
        n=c;
        c=0;
        }
       return false;

    }
};
