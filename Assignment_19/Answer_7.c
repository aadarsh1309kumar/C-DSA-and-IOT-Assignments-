#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//function declarqation
int main(){
    int flag = 0;
    char ip[25] = {"123.23.43.2"};
    char *a = strtok(ip,".");
    while(a != '\0'){
        int x = atoi(a);
        if(x>=0 && x<=255){
            break;
        }
        else{
            flag = 1;
            break;
        }
        a = strtok(NULL,".");
    }
    if(flag){
        printf("You dont enter a valid ip address:");
    }
    else{
        printf("YOu enter a valid ip address");
    }
}