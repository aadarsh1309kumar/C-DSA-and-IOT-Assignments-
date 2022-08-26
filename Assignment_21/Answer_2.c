// write a function to take input employee data from the user.
#include<stdio.h>
#include<string.h>

//structures
struct employee{
    int id;
    char name[30];
    float salary;
};

struct employee input(){
    struct employee temp;
    printf("Enter your id, name , salary: ");
    scanf("%d",&temp.id);
    fflush(stdin);
    fgets(temp.name,30,stdin);
    temp.name[strlen(temp.name)-1] = '\0';
    scanf("%f",&temp.salary);
    return temp;
};

//main function
int main(){
    struct employee rohan;
    rohan = input();
}
