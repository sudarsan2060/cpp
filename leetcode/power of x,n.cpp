class Solution {
public:
    double myPow(double x, int n) {
        
        if(x==1.0 || n==0)
            return 1.0;
        long long pow = n;
        if(n<0)
            x = 1/x;
        pow = -1*pow;
        double ans = 1.0;
        while(pow){
            if(pow%2)
                ans *= x;
            x*=x;
            pow/=2;
        }
        return ans;
    }
};
