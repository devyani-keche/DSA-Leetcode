class Solution {
    bool see(vector<int>& nums, int num,int m,int k){
        int count=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=num) count++;
            else {
                ans+=count/k;
                count=0;
            }
            if(ans>=m) return true;
        }
        ans+=count/k;
        return (ans>=m);
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m*1LL*k*1LL;
        if(val>bloomDay.size()) return -1;
        int i=*min_element(bloomDay.begin(),bloomDay.end()), j =*max_element(bloomDay.begin(), bloomDay.end());
        while(i<=j){
          
            int mid = i + (j - i) / 2;
            if(see(bloomDay,mid,m,k)) j=mid-1;
            else i=mid+1;
        }
        return i;
    }
};