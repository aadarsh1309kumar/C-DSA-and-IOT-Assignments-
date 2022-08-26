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
    printf("\nEnter your name: ");
    fgets(temp.name,20,stdin);
    temp.name[strlen(temp.name)-1] = '\0';
    printf("Enter your roll no: ");
    scanf("%d",&temp.roll_no);
    printf("Enter your class: ");
    scanf("%d",&temp.class);
    fflush(stdin);
    printf("\n");
    return temp;
};

void display(struct students temp){
    printf("\nName: %s\nroll no: %d\nclass: %d\n",temp.name,temp.roll_no,temp.class);
};

//main function
int main(){
    int size = 10;
    struct students names[size];

    for(int i = 0; i<size; i++){
        printf("Enter Student %d details",i+1);
        names[i] = input();
    }

    for(int i = 0; i<size; i++){
        printf("Student %d detail",i+1);
        display(names[i]);
    }
}