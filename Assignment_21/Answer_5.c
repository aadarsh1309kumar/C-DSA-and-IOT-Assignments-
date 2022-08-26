#include<stdio.h>
#include<string.h>

// structure
struct employee{
    int id;
    char name[20];
    float salary;
};

struct employee input(){
    struct employee temp;
    printf("\nEnter your id: ");
    scanf("%d",&temp.id);
    fflush(stdin);
    printf("Enter your name: ");
    fgets(temp.name,20,stdin);
    temp.name[strlen(temp.name)-1] = '\0';
    printf("Enter your salary: ");
    scanf("%f",&temp.salary);
    return temp;
};

void display(struct employee temp){
    printf("\nid: %d\nname: %s\nsalary: %0.1f\n",temp.id,temp.name,temp.salary);
};

//main function
int main(){
    int size = 3;
    struct employee names[size];

    //taking user input
    for(int i = 0; i<size; i++){
        printf("\nEnter %d employee information");
        names[i] = input();
    }
    
    //sorting with respect to salary
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size-1-i; j++){
            if(names[j].salary > names[j+1].salary){
            struct employee temp = names[j];
            names[j] = names[j+1];
            names[j+1] = temp;
            }
        }
    }

    //display result
    for(int i = 0; i<size; i++){
        printf("\n%d employee",i);
        display(names[i]);
    }

}