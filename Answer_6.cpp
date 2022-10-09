#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;

    public:
    Complex(){real = 0; imaginary = 0;}
    Complex(int real , int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex(Complex &c1){
        real = c1.real;
        imaginary = c1.imaginary;
    }
    Complex& operator=(Complex &c1){
        real = c1.real;
        imaginary = c1.imaginary;
        return *this;
    }
    void display(){
        cout<<"real: "<<real<<endl<<"Imaginary: "<<imaginary<<endl;
    }
};

int main(){
    Complex c1(1,2),c2(2,3) ,c3;
    c3 = c1 = c2;
    c1.display();

}