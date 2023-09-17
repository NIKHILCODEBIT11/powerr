#include<stdio.h>
void countvowels(char str[]);
int main(){
    char str[100];
    printf("enter the string:");
    fgets(str,100,stdin);
    countvowels(str);
    return 0;


}
void countvowels(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        count++;

    }

}
printf("the no. of vowels are %d",count);
// doubt when it runs
}