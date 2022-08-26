#include<stdio.h>
#include<string.h>

int main(){
    char names[3][30];
    int j;
    printf("Enter your names: ");
    for(int i = 0; i<3; i++){
        gets(names[i]);
    }
    //logic for palandrome
    for(int i = 0; i<3; i++){
        int temp = strlen(names[i])-1;
        for( j = 0; strlen(names[i])-1 ; j++){
            if(names[i][j] != names[i][temp-j]){
                break;
            }
        }
        if(j == strlen(names[i])){
            printf("%d palandrome string : %s \n",i,names[i]);
        }
    }
}