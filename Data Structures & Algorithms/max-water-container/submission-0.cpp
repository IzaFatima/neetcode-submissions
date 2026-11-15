class Solution {
public:
    int maxArea(vector<int>& heights) {
       int maxWater=0;
       int l=0,r=heights.size()-1;
       while(l<r){
        int width=r-l, height=min(heights[l],heights[r]);
        int waterContain=width*height;
        maxWater=max(maxWater,waterContain);
       heights[l]>heights[r]?r--:l++;
       } 
       return maxWater;
    }
};
