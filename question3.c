#include<stdio.h>
/*print 1(true) or 0(false) for following statements :
A. if it's sunday & it's snowing ---> true
B. if it's morning or it's raining ---> true
C. if a number is greater than 9 & less than 100 ---> true
    (2 digit number)
*/
int main(){
    int issunday=0;
    int issnowing=1;
    printf("%d",issnowing && issunday);
    return 0;
}