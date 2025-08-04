class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size()==0) return 0;
        else if (fruits.size()==1) return 1;
        else if (fruits.size()==2) return 2;
        
        int num1=fruits[0],i=1,tot=0,conti=1,maxi=INT_MIN;
       while (i < fruits.size() && fruits[i] == num1) {
            i++;
        }
        int num2=fruits[i];
        for(int i=0;i<fruits.size();i++){
            if(i>=2 && fruits[i-1]==fruits[i-2]) conti++;
            else conti=1;
            if(fruits[i]==num1 || fruits[i]==num2){
                tot++;
            }
            else {
                maxi=max(tot,maxi);
            
                tot=conti+1;
                num1=fruits[i-1];
                num2=fruits[i];
            }
        }
        maxi=max(maxi,tot);
        return maxi;
    }
};