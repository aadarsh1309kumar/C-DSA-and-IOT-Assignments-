#include<iostream>
using namespace std;

class Time{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(){hours = 0; minutes = 0; seconds = 0;}
    Time(int hours , int minutes , int seconds){
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    void display(){
        cout<<endl<<"Hours: "<<hours<<endl<<"Minutes: "<<minutes<<endl<<"Seconds: "<<seconds<<endl;
    }
    int get_minute(){
        return minutes;
    }
    int get_hours(){
        return hours;
    }
    int get_seconds(){
        return seconds;
    }
};

class Minute{
private:
    float minutes;
public:
    Minute(){minutes = 0;}
    void display(){
        cout<<endl<<"Minutes: "<<minutes<<endl;
    }
    Minute(Time temp){
        cout<<"i am constructor in minute class"<<endl;
        float temp_ = temp.get_seconds();
        temp_/=60;
        minutes = (temp.get_hours()*60) + (temp.get_minute()) + temp_;
    }
    void operator=(Minute object){ // minute object = t1;
        cout<<"i am = operator in minute class"<<endl;
        minutes = object.minutes;
    }
};

int main(){
    Time t1(2,30,50);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1;
    t1.display();
    m1.display();

}