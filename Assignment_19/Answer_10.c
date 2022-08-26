#include<stdio.h>
#include<string.h>

//main function
int main(){
    char names_pass[3][2][20] = {{"vishal","0"},{"simran","0"},{"ankit","0"}};
    char temp[2][20];
    int condition = 0 , condition_2 = 0 , i;
    for(int i = 0; i<2;i++){
    i==0?printf("Enter your username: "):printf("Enter your password: ");
    gets(temp[i]);
    }
    
    for(i = 0; i<3; i++){
        for(int j = 0; j<1;j++){
            if(strcmp(temp[i],names_pass[i][j]) == 0){
                condition = 1;
            }
            if(strcmp(temp[i+1],names_pass[i][j+1])==0){
                condition_2 = 1;
            }
        }
    }
    if(condition && condition_2){
            printf("welcome back %s",temp[0]);
        }
    else{
        printf("Check your username and password once again");
    }
}