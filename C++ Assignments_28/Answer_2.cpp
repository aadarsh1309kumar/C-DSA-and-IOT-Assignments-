#include<iostream>
using namespace std;

class Complex{
    private: 
        int real;
        int imaginary;
    
    public:
        Complex(){};
        Complex(int real , int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }
        void setdata(int real , int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        };
};

int main(){
    Complex c1;
    c1.setdata(1,2);
}