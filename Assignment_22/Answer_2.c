#include<stdio.h>
#include<stdlib.h>

//function declaration
int input();


//main function
int main(){
    int p , size;
    printf("Enter which size you want for your array: ");
    scanf("%d",&size);
    p = input(size);
    printf("%d",p);

}


//function definition
int input(int size){
    int *array , temp = 0;
    array = (int*)malloc(size*sizeof(int));

    if(array == NULL){
        printf("memory allocation failed:");
        return 0;
    }
    
    printf("Enter your elements\n");
    for(int i = 0; i<size; i++){
        scanf("%d",(array+i));
        temp += *(array+i);
    }
    free(array);
    return temp/size;
}