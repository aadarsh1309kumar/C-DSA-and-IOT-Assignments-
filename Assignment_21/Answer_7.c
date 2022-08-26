#include<stdio.h>
#include<string.h>

//structure
struct time{
    int hour;
    int minute;
    int seconds;
};

struct time input(){
    struct time t;
    printf("\nEnter hours: ");
    scanf("%d",&t.hour);
    printf("Enter minutes: ");
    scanf("%d",&t.minute);
    printf("Enter seconds: ");
    scanf("%d",&t.seconds);
    printf("\n");
    return t;
};

struct time diff(struct time t1 , struct time t2){
    struct time difference;
    //logic for seconds
    if(t1.seconds<t2.seconds){
        while(t1.seconds < t2.seconds){
        t1.seconds += 60;
        t1.minute--;
        difference.seconds = t1.seconds-t2.seconds;
        }
    }
    else{
        difference.seconds = t1.seconds-t2.seconds;
    }
    //logic for minutes
    if(t1.minute < t2.minute){
        while(t1.minute < t2.minute){
        t1.minute += 60;
        t1.hour--;
        difference.minute = t1.minute-t2.minute;
        }
    }
    else{
        difference.minute = t1.minute-t2.minute;
    }
    //logic for hours
    difference.hour = t1.hour-t2.hour;
    return difference;
};

void display(struct time difference){
    printf("Your difference is: %d hours : %d minutes : %d seconds\n",difference.hour,difference.minute,difference.seconds);
};

//main function
int main(){
    struct time t1 = input();
    struct time t2 = input();
    struct time difference = diff(t1,t2);
    display(difference);
    

}