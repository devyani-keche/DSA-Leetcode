class Solution {
public:
    int minMaxDifference(int num) {
        vector<int>arr;
        int a=num;
        while(a>0){
            arr.push_back(a%10);
            a/=10;
        }
        int change= arr[arr.size()-1];
        int uii =arr[arr.size()-1];
        int j=arr.size()-2;
        while(change == 9 && j>=0){
            change= arr[j];
            j--;
        }
        int i =arr.size()-1;
        a =0;
        int b=0;
        while(i>=0){
            if(arr[i]==change){
                a=(a*10)+9;
                
            }
            else {
                a=(a*10)+arr[i];
               
            }
             if(arr[i]==uii){
                b=(b*10);
             }
     
            else {
                b = (b * 10) + arr[i];
            }

            i--;
        }
        return a-b;
    }
};