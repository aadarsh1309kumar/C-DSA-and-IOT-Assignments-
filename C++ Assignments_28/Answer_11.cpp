#include<iostream>
using namespace std;

class shapes{
private:
    float Area;
public:
    void setArea(float a){
        Area = a;
    }
    void display(){
        cout<<Area;
    }
};

class circle{
private:
    shapes s;
    int radius;
public:
    void findArea(int radius){
        s.setArea(3.14*radius*radius);
    }
    shapes* operator->(){
        return &s;
    }
};

int main(){
    circle c1;
    c1.findArea(5);
    c1->display();
}