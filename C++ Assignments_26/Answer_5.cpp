#include<iostream>
using namespace std;

class Date{
    private:
    int d;
    int m;
    int y;

    public:
    Date(int date, int month , int year){
        d = date;
        m = month;
        y = year;
    }

    void display(){
        cout<<"Day: "<<d<<endl<<"Month: "<<m<<endl<<"Year: "<<y<<endl;
    }
};

int main(){
    Date d1(10,07,2002);
    d1.display();
}