class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater= INT_MIN,currWater=0,lp=0, rp=height.size()-1;
        while(lp<rp){
            int w=rp-lp;
            int h=min(height[lp],height[rp]);
            currWater=w*h;
            maxWater=max(maxWater,currWater);

            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWater;
    }
    
};