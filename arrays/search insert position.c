int searchInsert(int* nums, int numsSize, int target) {
    int i;
    i = 0;
    while (i < numsSize){
        if(nums[i] == target){
            return i;
        }
       else if(nums[i] > target){
            return i;
        }
    
        i++;
    }
    return i;
}