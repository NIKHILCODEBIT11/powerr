#include<stdio.h>
void input(char arr[]);
// void output(char arr[]);

// What is mistake!!!!!!!!!!!!!!!!

int main(){
    char name[50];
    input(name);
  //  output(name);
    return 0;
}
void input(char arr[]){
    int i;
    char ch;
    for(i=0;ch!='\n';i++){
        scanf("%c",&arr[i]);
    }
    arr[i]='\0';
    puts(arr);
}
// void output(char arr[]){
//     for(int i=0;arr[i]!='\n';i++){
//         printf("%c",arr[i]);
//     }
// }