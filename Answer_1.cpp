
#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;

    public:
    Complex(){};
    Complex(int real , int imaginary){this->real = real; this->imaginary = imaginary;}
    Complex(Complex &object){real = object.real; imaginary = object.imaginary;}
    Complex& operator=(Complex &object){
        real = object.real;
        imaginary = object.imaginary;
        return *this;
    }

    friend istream& operator>>(istream &input , Complex &object){
        cin>>object.real>>object.imaginary;
        return input;
    }
    friend ostream& operator<<(ostream &output , Complex &object){
        cout<<object.real<<endl<<object.imaginary<<endl;
        return output;
    }
};

int main(){
    Complex c1 , c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
}