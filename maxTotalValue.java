class Solution {
    public long maxTotalValue(int[] nums, int k) {
        int[] sormadexin=nums;
        int gma=Integer.MIN_VALUE;
        int gmi=Integer.MAX_VALUE;
        for(int num:sormadexin){
            gma=Math.max(gma, num);
            gmi=Math.min(gmi,num);
        }
        long dif= (long) gma - (long) gmi;
        return dif * (long) k;
    }
}
