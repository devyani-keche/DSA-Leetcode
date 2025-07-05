class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end(),greater<int>());
        int count=0,num=arr[0];
        for(int i =0;i<arr.size();i++){
            if(num==arr[i]){
                count++;
            }
            else if(count==num) return count;
            else{
                 count=1;
                 num=arr[i];
            }
        }
        if(count==num) return count;
        return -1;
    }
};