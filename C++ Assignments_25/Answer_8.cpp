#include<iostream>
using namespace std;

class rectangle{
    public:
    void area(int length , int breath){
        cout<<"Area of rectangle is: "<<length*breath<<"\n";
    }
};


int main(){
    rectangle object;
    object.area(2,3);
}