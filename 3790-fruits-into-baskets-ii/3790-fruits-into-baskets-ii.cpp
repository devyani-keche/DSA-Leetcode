class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int tot=0;
        for(int i =0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(baskets[j]!=-1 && baskets[j]>=fruits[i]){
                    baskets[j]=-1;
                    break;
                } 
            }
        }
        for(int j=0;j<baskets.size();j++){
            if(baskets[j]!=-1) tot++;
        }
        return tot;
    }
};