#include<iostream>
using namespace std;

class fraction{
    private:
    long numerator;
    long denominator;
    
    public:
    fraction(){};
    fraction(int numerator , int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    fraction operator++(){
        fraction temp;
        temp.numerator = ++numerator;
        temp.denominator = ++denominator;
        return temp;
    }
    fraction operator++(int dummy){
        fraction temp;
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
    }
    friend ostream& operator<<(ostream &output , fraction &object){
        cout<<object.numerator<<endl<<object.denominator;
        return output;
    }
    friend istream& operator>>(istream &input , fraction &object){
        cout<<"Enter numeraotr: ";
        cin>>object.numerator;
        cout<<"Enter denominator: ";
        cin>>object.denominator;
        return input;
    }
};

int main(){
    fraction f1 , f2;
    cin>>f1>>f2;
    f1++;
    cout<<f1<<f2;
    f1 = ++f2;
    cout<<f1;
    

}