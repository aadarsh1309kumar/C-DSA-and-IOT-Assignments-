#include<stdio.h>
#include<string.h>

//structures
struct employee{
    int id;
    char name[20];
    float salaray;
};

struct employee input(){
    struct employee temp;
    printf("Enter your id: ");
    scanf("%d",&temp.id);
    printf("Enter your name: ");
    fflush(stdin);
    fgets(temp.name,20,stdin);
    temp.name[strlen(temp.name)-1] = '\0';
    printf("Enter your salary: ");
    scanf("%f",&temp.salaray);
    return temp;
};

void display(struct employee temp){
    printf("id: %d\nname: %s\nsalary: %0.2f",temp.id,temp.name,temp.salaray);
}



//main function
int main(){
    struct employee rohan;
    rohan = input();
    display(rohan);
}