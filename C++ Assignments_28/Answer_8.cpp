#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int imaginary;
public:
    Complex(int real , int imaginary){
        this->imaginary = imaginary;
        this->real = real;
    }
    Complex(){
        real = 0; 
        imaginary = 0;
    }
    Complex& operator,(Complex c1){
        imaginary = c1.real;
        real = c1.imaginary;
        return *this;
    }
    void display(){
        cout<<real<<endl<<imaginary;
    }
};

int main(){
    Complex c1(1,2) , c2(2,3) , c3;
    c3 = (c1,c2);
    c3.display();
}