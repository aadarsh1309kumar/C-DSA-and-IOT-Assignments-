#include<iostream>
using namespace std;

class Time{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(){hours = 0; minutes = 0; seconds = 0;}
    Time(int time){
        hours = time/60;
        time%=60;
        minutes = time;
        time/=60;
        seconds = time;
    }
    void display(){
        cout<<"Hours: "<<hours<<endl<<"Minutes: "<<minutes<<endl<<"Seconds: "<<seconds<<endl;
    }
};

int main(){
    int duration;
    cout<<"Enter time duration in minutes";
    cin>>duration;
    Time t1 = duration;
    t1.display();
}