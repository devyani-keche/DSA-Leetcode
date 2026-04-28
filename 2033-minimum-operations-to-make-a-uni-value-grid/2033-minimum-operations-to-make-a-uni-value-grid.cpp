class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n =grid.size()*grid[0].size();
        if (n==1) return 0;
        vector<int>arr;
        for(int i =0;i<grid.size();i++){
            for(int j =0;j<grid[0].size();j++){
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        int target=arr[n/2];
        int count =0;
        for(int i =0;i<n;i++){
            if(target%x!=arr[i]%x) return -1;
            count+=abs(target-arr[i])/x;
        }
        return count;
    }
};