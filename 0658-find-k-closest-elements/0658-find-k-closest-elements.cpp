class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        for(int num:arr){
            if(pq.size()<k){
                pq.push({abs(num-x),num});
            } 
            else {
                if(abs(num-x)<abs(pq.top().second-x)){
                    pq.pop();
                    pq.push({abs(num-x),num});
                }
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};