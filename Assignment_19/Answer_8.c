#include<stdio.h>
#include<string.h>

int main(){
    char strings[6][30];
    int count_w1 = 0 , count_w2 = 0 , minimum_distance = 0;
    for(int i = 0; i<6; i++){
        gets(strings[i]);
    }

    printf("enter your first word: ");
    char first_string[30];
    gets(first_string);
    

    printf("Enter your second word: ");
    char second_string[30];
    gets(second_string);
    

    for(int i = 0; i<6; i++){
        if(strcmp(strings[i],first_string) == 0){
            count_w1 = i;
        }
        if(strcmp(strings[i],second_string) == 0){
            count_w2 = i;
        }
        
        if(count_w1 > 0 && count_w2 > 0){
            minimum_distance = count_w2-count_w1;
        }
}
printf("%d",minimum_distance-1);
}