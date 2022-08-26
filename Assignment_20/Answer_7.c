#include<stdio.h>

//function decalaration
void counting_vow(char* , int* , int*);

//main function
int main(){
    int consonants,vowel;
    char string[20] = {"aaeioujdkk"};
    counting_vow(string,&consonants,&vowel);
    printf("YOur string contain %d vowels and %d consonants",vowel,consonants);
}

//function definition
void counting_vow(char string[] , int *consonants , int *vowel){
    int temp_vow = 0; int temp_cons = 0;
    for(int i = 0; string[i] ; i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            temp_vow++;
        }
        else{
            temp_cons++;
        }
    }
    *consonants = temp_cons;
    *vowel = temp_vow;
}