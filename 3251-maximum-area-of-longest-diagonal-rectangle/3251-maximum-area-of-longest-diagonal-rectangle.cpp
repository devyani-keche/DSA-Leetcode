class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        float maxi=INT_MIN;
        int area=0;
        for(int i =0;i<dimensions.size();i++){
            if(maxi<(pow(dimensions[i][0],2) + pow(dimensions[i][1],2))){
                maxi=(pow(dimensions[i][0],2) + pow(dimensions[i][1],2));
                area=dimensions[i][0]*  dimensions[i][1];
            }
            if(maxi==(pow(dimensions[i][0],2) + pow(dimensions[i][1],2))){
                area=max(area, dimensions[i][0]*  dimensions[i][1]);
            }

        }
        return area;
    }
};