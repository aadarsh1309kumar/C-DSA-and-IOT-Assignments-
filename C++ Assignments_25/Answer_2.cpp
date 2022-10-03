#include<iostream>
using namespace std;

class time{
    int hours;
    int minutes;
    int seconds;
    
    public: 
    void update_hours(int u_hours){
        hours = u_hours;
    }
    void update_minutes(int u_minutes){
        minutes = u_minutes;
    }
    void update_seconds(int u_seconds){
        seconds = u_seconds;
    }
    void set_time(int Hours , int Minutes , int Seconds){
        hours = Hours;
        minutes = Minutes;
        seconds = Seconds;
    }

    void display(){
        cout<<hours<<"Hours: "<<minutes<<"Minutes: "<<seconds<<"Seconds\n";
    }
};

int main(){
    time time_1;
    time_1.set_time(1,20,60);
    time_1.display();
    
    //update hours by 1;
    time_1.update_hours(3);

    time_1.display();
}