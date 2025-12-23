class Solution {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer> ele = new HashSet<>();
       for (int num : nums) ele.add(num);
       int maxi=0;
       for(int num:ele){
        if(!ele.contains(num-1)){
            int current =num;
            int count=1;
            while(ele.contains(current+1)){
                current ++;
                count++;
            }
            maxi = Math.max(maxi,count);
        }
       }
       return maxi;
    }
}

