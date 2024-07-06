/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;

    for(int i = digitsSize - 1; i >= 0; i--){
        if(digits[i] < 9){
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    
    if(digits[0] == 0){
        (*returnSize)++;
        int* res = (int*)malloc(sizeof(int)*(*returnSize));
        res[0] = 1;
        for(int i = 1; i < (*returnSize); i++)
            res[i] = digits[i - 1];
        free(digits);
        return res;
    }
    else
        return digits;
}