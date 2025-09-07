class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> arr;
        int a = n/2;
        for(int i = 0; i<n/2;i++){
            arr.push_back(a);
            arr.push_back(-1*a);
            a--;
        }
        if(n%2==1) arr.push_back(0);
        return arr;
    }
};