// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         vector<vector<int>> arr;
//         sort(intervals.begin(),intervals.end());
//         for(int i=0;i<intervals.size();i++){
//             if(i+1<intervals.size() && intervals[i+1][0]<=intervals[i][1] ) {
//                 arr.push_back({intervals[i][0], max(intervals[i+1][1],intervals[i][1])});
                
//                 intervals[i+1][0]=intervals[i][0];
//                 intervals[i+1][1]=max(intervals[i+1][1],intervals[i][1]);
//             }
//             else arr.push_back(intervals[i]);

//         }
//         int i=0;
//         while(i+1<arr.size()){
//             if(arr[i+1] == arr[i]) arr.erase(arr.begin()+i+1);
            
//             else i++;
//         }
//         return arr;
//     }
// };

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        
        for (int i = 1; i < intervals.size(); ++i) {
            // Get the last interval in the merged list
            vector<int>& last = merged.back();
            
            // Check for overlap
            if (intervals[i][0] <= last[1]) {
                // Merge the intervals
                last[1] = max(last[1], intervals[i][1]);
            } else {
                // No overlap, add the interval to the result
                merged.push_back(intervals[i]);
            }
        }
        
        return merged;
    }
};
