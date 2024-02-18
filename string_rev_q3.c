#include<stdio.h>
#include<string.h>
void salting(char arr[],int n,int m);
void input(char arr[]);
void output(char arr[]);
int main(){
    char arr[10]={"0"};
    int n,m;
    input(arr);
    printf("Enter the number of alphabet from which i have to start :");
    scanf("%d",&n);
    printf("Enter the number of alphabet where i have to end :");
    scanf("%d",&m);
    //output(arr);
    salting(arr,n,m);
    return 0;
}
void input(char arr[]){
    printf("Enter password :");
    fgets(arr,100,stdin);
}
void output(char arr[]){
    puts(arr);
}
void salting(char arr[],int n,int m){
    char salt[]="salt123";
    char salt1[10];
    int j;
    for(int i=0,j=0;i<4;i++,j++){
        salt1[j]=salt[i];
    }
    salt1[j]='\0';
    printf("%s",salt1);
   // puts(salt1);
    char salt2[10];
    //int j;
    for(int i=4,j=0;i<7;i++,j++){
        salt2[j]=salt[i];
    }
    salt2[j]='\0';
    char arr1[10];
    strcpy(arr1,arr);
    //puts(arr1);
    char arr2[10];
    //int j;
    for(int i=0,j=0;i<n;i++,j++){
        arr2[j]=arr1[i];
    }
    arr2[j]='\0';
    //puts(arr2);
    strcat(arr2,salt1);
    char arr3[10];
    for(int i=n,j=0;i<m;i++,j++){
        arr3[j]=arr1[i];
    }
    strcat(arr3,salt2);
    strcat(arr2,arr3);
    //puts(arr2);
}