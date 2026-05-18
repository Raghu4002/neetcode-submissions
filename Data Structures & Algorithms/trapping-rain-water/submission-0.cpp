class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int lm=height[left];
        int rm=height[right];
        int water=0;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=lm){
                    lm=height[left];
                }
                else{
                    water+=lm-height[left];
                }
                left++;
            }
            else{
                if(height[right]>=rm){
                    rm=height[right];
                }
                else{
                    water+=rm-height[right];
                }
                right--;
            }
        }
        return water;
    }
};
