#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
   
   int *ptr;
   ptr = (int* )malloc (2 * sizeof(int));
   if (!ptr){
    return NULL;
   }

    int i,j;
    i = 0;
    while(i < numsSize - 1){
        j = i + 1;
        while (j < numsSize){
            if(nums[i] + nums [j] == target){
                ptr [0] = i;
                ptr [1] = j;
                *returnSize = 2;
            }
            j++;
        }
        i++;
    }
    return ptr;
}