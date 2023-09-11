#include<stdio.h>
// write a function to calculate percentage of a student from marks in science,math and sanskrit.
float marks(int science, int math, int sanskrit);
int main(){
    int science,math,sanskrit;
    printf("enter marks in science: ",science);
    scanf("%d",&science);
    printf("enter marks in math: ",math);
    scanf("%d",&math);
    printf("enter marks in sanskrit: ",sanskrit);
    scanf("%d",&sanskrit);  
    printf("total percentage is: %f",marks(science,math,sanskrit));
    return 0;
    
}
float marks(int sci, int m, int s){
    return (((sci+m+s)/300.0)*100.0);
}