class Solution {
public:
    int trap(vector<int>& height) {
        int maxl=0,maxr=0,water=0,l=0,r= height.size()-1;

        while(l<r){
            if(height[l]<=height[r]){
                if(maxl>height[l]) water += maxl-height[l];
                else maxl = height[l];
            l++;
            }
            else{
                if(maxr>height[r]) water += maxr-height[r];
                else maxr=height[r];
            r--;
            }
        }
        return water;
    }
};