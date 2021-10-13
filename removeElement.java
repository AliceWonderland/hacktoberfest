class Solution {
    public int removeElement(int[] nums, int val) {
        int l = nums.length;
        int temp=0;
      
        int i=0;
        int j=0;
        while(j<l){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;  
            }
            
             j++;
        } 
        return i;
    }
    
}
