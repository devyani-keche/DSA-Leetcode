class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int x = points[0][1];
        int y = points[0][0];
        int count =1;
        for(int i =1;i<points.size();i++){
            if((x>=points[i][0] && x<=points[i][1]) ||( points[i][0]>=y && points[i][0]<=x)) {
                x=min(x,points[i][1]);
                y=max(y,points[i][0]);
                continue;
            }
            else{
                count++;
                x=points[i][1];
                y= points[i][0];
            }
        }
        return count;
    }
};