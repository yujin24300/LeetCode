int searchInsert(int* nums, int numsSize, int target) {
    int idx = -1;

    if(target > nums[numsSize - 1])
        return numsSize;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] >= target){
            idx = i;
            break;
        }
    }

    return idx;
}