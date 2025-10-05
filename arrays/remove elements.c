void ft_swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    int k = 0;
    int *target;
    int last = numsSize - 1;
    while(i < numsSize){
        if(nums[i] == val){
            nums[i] = 0;
            i++;
            continue;
        }
        k++;
        i++;
    }

    i = 0;
    while ( i < last){
        if (nums[i] == 0){
            ft_swap(&nums[i], &nums[last]);
            last--;
        }else {
            i++;
        }
    }
    return k;                        
}