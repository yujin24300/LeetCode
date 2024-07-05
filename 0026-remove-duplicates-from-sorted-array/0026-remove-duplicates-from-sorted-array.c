int removeDuplicates(int* nums, int numsSize) {
	if(numsSize == 0)
        return 0;

    int cnt = 1;
	for (int i = 1; i < numsSize; i++) {
		if(nums[i] != nums[cnt - 1])
            nums[cnt++] = nums[i];
	}
    return cnt;
}