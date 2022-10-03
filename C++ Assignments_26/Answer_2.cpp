#include<iostream>
using namespace std;

class time{
    private:
    int h;
    int m;
    int s;

    public:
    time(){
        h = 0; 
        m = 0; 
        s = 0;
    }
    void setTime(int hour, int minutes , int seconds){
        h = hour;
        m = minutes;
        s = seconds;
    }

    void showTime(){
        cout<<h<<" Hours : "<<m<<" Minutes : "<<s<<" Seconds";
    }

    void normalize(int hours , int minutes , int seconds){
        cout<<h<<":"<<m<<":"<<s;
    }

    //function declaration
    time addTime(time t);
    time subtractTime(time t);
    
};



int main(){
    time t1 , t2 , t3;
    t1.setTime(12,25,11);
    t2.setTime(10,30,17);
    //t3 = t1.addTime(t2);
    t3 = t1.subtractTime(t2);
    t3.showTime();
}

//function definition
time time::addTime(time t){
        time temp;
        temp.h = h+t.h;
        temp.m = m+t.m;
        temp.s = s+t.s;
        while(temp.s>60){
            temp.m++;
            temp.s -= 60;
        }
        while(temp.m > 60){
            temp.h++;
            temp.m -= 60;
        }
        return temp;
    }

    time time::subtractTime(time t){
        time temp;
        while(s < t.s){
            s +=  60;
            m--;
        }
        temp.s = s - t.s;
        while(m < t.m){
            m += 60;
            h--;
        }
        temp.m = m - t.m;
        temp.h = h - t.h;
        return temp;
    }