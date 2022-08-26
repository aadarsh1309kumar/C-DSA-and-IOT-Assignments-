#include<stdio.h>
#include<string.h>

int main(){
    char e_mails[5][30];
    printf("Enter your e-mail id's: ");
    for(int i = 0; i<5; i++){
        gets(e_mails[i]);
    }

    // printing odd e-mails
    for(int i = 0; i<5; i++){
        if(strchr(e_mails[i],'@') == 0){
            printf("%s ",e_mails[i]);
        }
    }
    
}