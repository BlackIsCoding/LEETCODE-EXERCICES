int singleNumber(int* nums, int numsSize) {
    int i, j, s, number;
    i = 0;
    number = 0;
    while( i <= numsSize - 1){

        s = 0;
        while(s < i){
            if(nums[s] == nums[i]){
                break;
            }
            s++;
        }

    if ( s == i){
        j = i + 1;
        while(j < numsSize){
                        if(nums[i] == nums[j])
                        break;
             j++;
            }
            if(j == numsSize){
                 number = nums[i];
            }
        }
    i++;
}
return number;
}