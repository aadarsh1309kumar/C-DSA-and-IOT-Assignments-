#include<stdio.h>

// function definition
void comparision(char* , char*);

//main function
int main(){
    char string[30],string2[30];
    comparision(string,string2);
}

//function definition
void comparision(char string[] , char string2[]){
    printf("Enter string 1: ");
    fgets(string,30,stdin);
    printf("Enter string 2: ");
    fgets(string2,30,stdin);
    int count_s1=0, count_s2 = 0 , j;
    
    //count string elements.
    for(int i = 0; string[i] ; i++){
        count_s1++;
    }
    for(int i = 0; string2[i]; i++){
        count_s2++;
    }
    
    if(count_s1 == count_s2){
        for( j = 0 ; j < count_s1; j++){
            if(string[j] == string2[j]){
                continue;
            }
            else{
                printf("Your string are not same");
                break;
            }
        }
    }
    else{
        printf("Your string is not same");
    }

    if(count_s1 == j){
        printf("your string is same");
    }
    
}