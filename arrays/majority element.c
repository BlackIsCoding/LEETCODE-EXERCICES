int check_duplicate(int *nums, int i) {
    int s = 0;
    while (s < i) {
        if (nums[i] == nums[s])
            return 1;
        s++;
    }
    return 0;
}

void maj_search(int *nums, int i, int *count, int numsSize) {
    int j = 0;
    *count = 0;
    while (j < numsSize) {
        if (nums[j] == nums[i])
            (*count)++;
        j++;
    }
}

int majorityElement(int* nums, int numsSize) {
    int i = 0;
    int maj;
    int count;

    while (i < numsSize) {
        if (check_duplicate(nums, i) == 0) {
            maj_search(nums, i, &count, numsSize);
            if (count > numsSize / 2) {
                maj = nums[i];
                return maj;
            }
        }
        i++;
    }
    return maj;
}