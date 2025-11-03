class Solution {
    public int maxFrequency(int[] nums, int k, int numOperations) {
        Arrays.sort(nums);
        int n = nums.length;

        int left = 0;
        int right = 0;
        int sumCount = 0;
        int result = 0;
        int left2 = 0;
        int sumCount2 = 0;
        int count = 0;
        int prev = Integer.MIN_VALUE;

        for (int num : nums) {
            if (num == prev) {
                count++;
            } else {
                prev = num;
                count = 1;
            }

            while (nums[left] < num - k) {
                sumCount--;
                left++;
            }

            while (right < n && nums[right] <= num + k) {
                sumCount++;
                right++;
            }
            result = Math.max(result, count + Math.min(sumCount - count, numOperations));

            sumCount2++;
            while (nums[left2] < num - 2L * k) {
                sumCount2--;
                left2++;
            }
            result = Math.max(result, Math.min(sumCount2, numOperations));
        }

        return result;
    }
}
