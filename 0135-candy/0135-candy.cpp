class Solution {
public:
    int candy(vector<int>& ratings) {
        if (ratings.size()==1) return 1;
        vector<int> candy(ratings.size(),1);
   
            if(ratings[ratings.size()-2]<ratings[ratings.size()-1]) candy[ratings.size()-1]+=1;//112
        for(int i=ratings.size()-1;i>0;i--){
            if(ratings[i-1]>ratings[i]) {
                candy[i-1]=candy[i]+1;
                
            }
          
            
        }
  
        if(ratings[0]>ratings[1] && candy [0]<=candy[1]) candy[0]+=1;
        for(int i=0;i<ratings.size()-1;i++){
            if(ratings[i+1]>ratings[i] && candy[i+1]<=candy[i]) {
                candy[i+1]=candy[i]+1;
               
            }
           

        }
 
         return accumulate(candy.begin(),candy.end(),0);
    }
};