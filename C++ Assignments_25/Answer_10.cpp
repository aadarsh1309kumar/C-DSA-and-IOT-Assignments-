#include<iostream>
using namespace std;

class Area{
    public:
    void area_of_circle(int radius){
        cout<<"area of circle is: "<<(2*3.14*radius*radius)<<"\n";
    };
    void area_of_rectangle(float length , float breath){
        cout<<"area of rectangle is: "<<length*breath<<"\n";
    };
    void area_of_square(int side){
        cout<<"area of square is: "<<(4*side)<<"\n";
    };
};

//main function
int main(){
    Area object;
    object.area_of_circle(1);
    object.area_of_rectangle(1,2);
    object.area_of_square(4);
}