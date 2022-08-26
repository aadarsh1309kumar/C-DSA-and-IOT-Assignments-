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
    printf("\nid: %d\nname: %s\nsalary: %f",temp.id,temp.name,temp.salary);
};

//main function
int main(){
    int size = 3;
    struct employee names[size];

    //taking input
    for(int i = 0; i < size; i++){
        printf("Enter %d employee details\n",i+1);
        names[i] = input();
    }

    //arranging employes
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size-1-i; j++){
            if(strcmp(names[j].name,names[j+1].name) > 0){
                struct employee temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }

    for(int i = 0; i<size; i++){
        printf("\nEnployee %d",i+1);
        display(names[i]);
    };
}