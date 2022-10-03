#include<iostream>
using namespace std;

//class
class circle{
    public:
    void area_(int radius){
        cout<<"Area of circle is: "<<(2*3.14*radius*radius);
    };
};

//main function
int main(){
    circle object;
    object.area_(1);
}