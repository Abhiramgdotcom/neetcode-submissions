class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int area,maxArea=0;
        while (left<right){
            area=(right-left)*min(heights[left],heights[right]);
            maxArea=max(maxArea,area);
            if (heights[left]<heights[right])
                left++;
            else
                right--;
        }
        return maxArea;
    }
};
