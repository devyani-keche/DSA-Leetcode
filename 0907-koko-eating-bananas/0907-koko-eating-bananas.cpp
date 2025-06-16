class Solution {

    int cap(vector<int>nums,int hour){
        long long eat=0;
        for(int i=0;i<nums.size();i++){
            eat+=ceil((double)nums[i]/(double)hour);
        }
         if (eat > INT_MAX) return INT_MAX;
         return eat;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1, j =*max_element(piles.begin(), piles.end());
        while(i<=j){
            int mid = i + (j - i) / 2;

         if(cap(piles,mid)<=h) j=mid-1;
            else i = mid+1;
        }
        return i;
    }
};