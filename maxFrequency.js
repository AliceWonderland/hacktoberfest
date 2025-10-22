var maxFrequency = function(nums, k, numOperations) {
    nums.sort((a,b) => a - b);
    let n = nums.length;
    let maxFreq = 1;

    for (let i = 0; i < n; i++) {
        let freq = 1;
        let ops = numOperations;

        for (let j = i-1; j >= 0; j--) {
            let diff = nums[i] - nums[j];
            if (diff <= k && ops > 0) {
                freq++;
                ops--;
            } else {
                break;
            }
        }

        maxFreq = Math.max(maxFreq, freq);
    }

    return maxFreq;
};
