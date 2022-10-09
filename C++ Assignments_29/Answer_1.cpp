#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int imaginary;
public:
    Complex(){real = 0; imaginary = 0;}
    Complex(const int number){
        cout<<"i am pc"<<endl;
        real = number;
        imaginary = number+1;
    }
    void operator=(Complex object){
        cout<<"I am = "<<endl;
        real = object.real;
        imaginary = object.imaginary;
    }
};

int main(){
    Complex c1 = 5;
    int x = 5;
    c1 = x;
}