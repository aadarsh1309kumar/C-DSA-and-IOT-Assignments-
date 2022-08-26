#include<stdio.h>
#include<string.h>

//structurs
struct marks{
    char name[20];
    int roll_no;
    float chem_marks;
    float maths_marks;
    float phy_marks;
    float percentage;
};

struct marks input(){
    struct marks temp;
    printf("\nEnter your name: ");
    fgets(temp.name,20,stdin);
    temp.name[strlen(temp.name)-1] = '\0';
    printf("Enter roll no: ");
    scanf("%d",&temp.roll_no);

    printf("Enter chemestry marks: ");
    scanf("%f",&temp.chem_marks);

    printf("Enter maths marks: ");
    scanf("%f",&temp.maths_marks);

    printf("Enter physics marks: ");
    scanf("%f",&temp.phy_marks);
    fflush(stdin);
    printf("\n");
    return temp;
}


void percentage(struct marks temp){
    temp.percentage = (temp.chem_marks+temp.maths_marks+temp.phy_marks)*100/300;
    printf("Name: %s\npercentage: %0.1f\n\n",temp.name,temp.percentage);
};


//main function
int main(){
    int size = 2; 
    struct marks students[size];
    
    //for taking input 
    for(int i = 0; i<size; i++){
        students[i] = input();
    };

    //for calculating percentage
    for(int i = 0; i<size; i++){
        percentage(students[i]);
    };
}