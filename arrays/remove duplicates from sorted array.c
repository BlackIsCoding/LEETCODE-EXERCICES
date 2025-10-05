int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) 
        return 0;

    int k = 1; 
    int i = 1;

    while (i < numsSize) {
        if (nums[i] != nums[k - 1]) { 
            nums[k] = nums[i]; 
            k++;
        }
        i++;
    }
    return k;
}