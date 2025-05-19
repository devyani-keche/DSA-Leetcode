class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> ll= new ArrayList<String>();
        ans("",ll,0,0,n);
        return ll;
    }
    public static void ans(String ans,List <String>ll,int open,int close,int n) {
        if(ans.length()==n*2){
            ll.add(ans);
            return;
        }
        if(open<n){
            ans(ans+"(",ll,open+1,close,n);
        }
        if(close<open){
            ans(ans+")",ll,open,close+1,n);
        }
    }
}