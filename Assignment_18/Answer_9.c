#include<stdio.h>
#include<string.h>
//function declaration
void swaping(char* , int , int);

//main function
int main(){
    int start = 0 , end = 0 , i = 0 , flag = 0; 
    char string[100] = {"My  name is vishal"};
    while(string[i] != '\0'){
        while(string[i] != ' '){
            if(string[i] == '\0'){
                flag = 1;
                break;
            }
            end++;
            i++;
        }
        swaping(string,start,end-1);
        if(flag == 1){
            break;
        }
        start = end++;
        i++;
    }
    swaping(string,0,i-1);
    printf("%s",string);
    
}

//function definition
void swaping(char string[] , int start , int end){
    while(start <= end){
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }
}