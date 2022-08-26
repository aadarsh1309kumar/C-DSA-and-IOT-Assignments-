#include<stdio.h>
#include<string.h>

int main(){
    char cities[10][20];

    printf("Enter your cities name: ");
    for(int i = 0; i<10; i++){
        gets(cities[i]);
    }

    //logic for sorting in dictinory order
    for(int i = 0; i < 10; i++){
        for(int j = 0; j<9-i; j++){
            if(strcmp(cities[j] , cities[j+1]) > 0){
                char temp[20];
                strcpy(temp,cities[j]);
                strcpy(cities[j],cities[j+1]);
                strcpy(cities[j+1],temp);
            }
        }
    }
    for(int i = 0; i<10; i++){
        printf("%s\n",cities[i]);
    }
}