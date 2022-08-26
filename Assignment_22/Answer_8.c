#include<stdio.h>
#include<stdlib.h>

//main function
int main(){
    int *dangling;
    {
        dangling = (int*)malloc(sizeof(int));
        *dangling = 1;
        printf("i am not a dangling pointer: %d",*dangling);
        free(dangling);
    }
    *dangling = 2;
    printf("\nnow i am a dangling pointer: %d",*dangling); //because we free the memory so now the pointer doesn't point anywhere;
}