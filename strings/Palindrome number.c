#include <stdbool.h>

bool isPalindrome(int x) {
 long re_x = 0;
 int clone = x ;

 while(clone  > 0 ){
    re_x = (re_x * 10) + (clone % 10);
    clone = clone / 10;
 }   

 if (re_x == x){
    return true;
 }else {
    return false;
 }

}