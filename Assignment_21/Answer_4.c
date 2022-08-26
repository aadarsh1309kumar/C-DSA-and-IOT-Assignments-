#include<stdio.h>
#include<string.h>

//structure
struct employee{
    int id;
    char name[20];
    float salary;
};

struct employee input(){
    struct employee temp;
    printf("Enter your id: ");
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
    printf("id: %d\nname: %s\nsalary: %0.2f\n",temp.id,temp.name,temp.salary);
};

//main function
int main(){
    int size = 10;
    struct employee names[size];

    for(int i = 0; i<size; i++){
        printf("\nEnter %d employee details\n",i+1);
        names[i] = input();
    }
    struct employee max = names[0];
    
    for(int i = 0; i<size; i++){
        if(max.salary < names[i].salary){
            max = names[i];
        }
    }
    printf("Your employee with max salary out of 10;");
    display(max);
}