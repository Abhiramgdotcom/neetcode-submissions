class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxRight=INT_MIN,maxLeft=INT_MIN;
        int count=0;
        while (left<right){
            if (height[left]<=height[right]){
            if (height[left]>=maxLeft){
                maxLeft=height[left];
            }
            else{
                count+=maxLeft-height[left];
            }
            
                left++;
        }
        else{
           if (height[right]>maxRight){
                maxRight=height[right];
            }
            else{
                count+=maxRight-height[right];
            }
            right--;
        }
        
        }
        return count;
    }
};
