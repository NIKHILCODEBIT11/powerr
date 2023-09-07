#include<stdio.h>
/*print 1(true) or 0(false) for following statements :
A. if it's sunday & it's snowing ---> true
B. if it's morning or it's raining ---> true
C. if a number is greater than 9 & less than 100 ---> true
    (2 digit number)
*/
int main(){
    int is_monday=0;
    int is_raining=0;
    printf("%d",is_monday||is_raining);
    return 0;
}