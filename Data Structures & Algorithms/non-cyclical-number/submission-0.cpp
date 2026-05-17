class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visit;
        while(visit.find(n)==visit.end()){
            visit.insert(n);
            n=sq(n);
            if(n==1)return true;
        }
        return false;
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
