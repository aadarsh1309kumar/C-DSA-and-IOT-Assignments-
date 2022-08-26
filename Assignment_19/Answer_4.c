#include<stdio.h>
#include<string.h>

int main(){
    char array[5][30];
    char temp[30];
    int temp_break = 1;
    printf("Enter your strings: ");
    for(int i = 0; i<5; i++){
        gets(array[i]);
    }
    printf("Enter your string which you want to find: ");
    gets(temp);

    for(int i = 0; i<5; i++){
        if(strcmp(array[i],temp) == 0){
            printf("Your string found");
            temp_break = 0;
        }
    }
    if(temp_break){
        printf("YOur string is not found");
    }
}