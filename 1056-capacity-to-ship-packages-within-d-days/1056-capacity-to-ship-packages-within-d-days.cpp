class Solution {
public:
    bool check(vector<int>weights, int days,int mid){
        int weight=0,count =1;
        for(int i =0;i<weights.size();i++){
            if(weight+weights[i]<=mid) weight+=weights[i];
            else {
                weight =weights[i];
                count++;
            }
        }
        if(count<=days) return true;
        return false;
    } 
    int shipWithinDays(vector<int>& weights, int days) {
        int i = *max_element(weights.begin(), weights.end());

        int j = accumulate(weights.begin(), weights.end(), 0);
        while(i<=j){
            
            int mid= i+(j-i)/2;
            if(check(weights,days,mid)) j=mid-1;
            else i=mid+1;
        }
        return i;
    }
};