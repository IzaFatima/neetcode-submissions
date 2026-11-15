class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1;
        int maxL=height[l],maxR=height[r];
        int mostWater=0;
        if(height.size()<=2) return 0;
        while(l<r){
            if(height[l]<height[r] ){
                l++;
                maxL=max(maxL,height[l]);
                mostWater+=maxL-height[l];
            }else{
                r--;
                 maxR=max(maxR,height[r]);
                  mostWater+=maxR-height[r];
            }

        }
        return mostWater;
    }
};
