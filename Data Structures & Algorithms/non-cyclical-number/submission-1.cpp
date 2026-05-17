class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=sq(n);
        while(slow!=fast){
            fast=sq(sq(fast));
            slow=sq(slow);
        }
        return fast==1;
    }
    int sq(int n){
        int o=0;
        while(n>0){
            int d=n%10;
            d=d*d;
            o+=d;
            n/=10;
        }
        return o;
    }
};
