#include<stdio.h>
#include<string.h>

//structure
struct students{
    char name[20];
    int roll_no;
    int class;
};

struct students input(){
    struct students temp;
    printf("\nEnter name: ");
    fgets(temp.name,20,stdin);
    temp.name[strlen(temp.name)-1] = '\0';
    printf("Enter roll no: ");
    scanf("%d",&temp.roll_no);
    printf("Enter your class: ");
    scanf("%d",&temp.class);
    fflush(stdin);
    printf("\n");
    return temp;
};

void display(struct students temp){
    printf("\nname: %s\nroll no: %d\nclass: %d\n\n",temp.name,temp.roll_no,temp.class);
};

//main function
int main(){
    int size;
    printf("Enter how much students data you want to store: ");
    scanf("%d",&size);
    fflush(stdin);
    struct students names[size];

    for(int i = 0; i<size; i++){
        printf("Enter student %d details",i+1);
        names[i] = input();
    }

    for(int i = 0; i<size; i++){
        printf("Student %d details",i+1);
        display(names[i]);
    }
}