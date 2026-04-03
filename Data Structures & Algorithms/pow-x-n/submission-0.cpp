class Solution {
    double solve(double x, int n)
    {
        if(n==0){
            return 1;
        }
        if(n%2==0){
            return pow(solve(x,n/2),2);
        }
        if(n%2==1){
            return x*pow(solve(x,n/2),2);
        }
    }
public:
    double myPow(double x, int n) 
    {   if(n<0){
double p=solve(x,(n*(-1)));
return 1/p;
    }
    else{
        double p=solve(x,n);
        return p;
    }
        
       
      
    }
};
