#include<iostream>
using namespace std;

class Distance{
private:
    int feet;
    int inches;
public:
    
    Distance(){
        feet = 0;
        inches = 0;
    }
    Distance(int feet , int inches){
        this->feet = feet;
        this->inches = inches;
    }
    void display(){
        cout<<feet<<endl<<inches;
    }
    void operator()(int a , int b , int c){
        feet = a+c+5;
        inches = a+b+15;
    }
};

int main(){
    Distance d1;
    d1(1,2,3);
    d1.display();
}