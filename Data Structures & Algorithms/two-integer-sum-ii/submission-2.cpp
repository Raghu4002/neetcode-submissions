class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        sort(numbers.begin(),numbers.end());
        int left=0;
        int n=numbers.size();
        int right=n-1;
        //vector<int> ans;
        while(left<right){
            int total=numbers[left]+numbers[right];
            if(total<target)left++;
            else if(total>target)right--;
            else{
                return {left+1,right+1};
            }
        }
        return {};
    }
};
