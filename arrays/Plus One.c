/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i;
    int carry = 1;
    int *arr;

    i = 0;
    while(i < digitsSize){
        if(digits[i] == 9){
            i++;
        }else{
            break;
        }
    }

    if(i == digitsSize){
        arr = (int *)malloc((digitsSize + 1) * sizeof(int));
        i = digitsSize;
        int k = digitsSize -1;
        while (i >= 0 && k >= 0){
            arr[i--] = digits[k--];
        }
        arr[0] = 1;
        i = digitsSize ;
        while (i >= 0){
            if (arr[i] == 9){
                arr[i] = 0;
            }
            i--;
        } 
        *returnSize = digitsSize + 1;
  
    }else{
          arr = (int *)malloc(digitsSize * sizeof(int));
          i = 0;
          while (i < digitsSize){
            arr[i] = digits[i];
            i++;
          }
             i = digitsSize - 1;
          while (i >= 0){
            if (arr[i] + 1 == 10){
                arr[i] = 0;
                carry = 1;
                i--;
                continue;
            }else {
                arr[i] = arr[i] + carry;
                carry = 0;
                break;
            } 
          }
          *returnSize = digitsSize;
    }
    return arr;
}