#include<iostream>
using namespace std;

//class
class complex{
    int real;
    int imaginary;
    
    public:
    void setvalue(int real_number , int imaginary_number){
        real = real_number;
        imaginary = imaginary_number;
    }

    void print(){
        cout<<"printing numbers: ";
        cout<<real<<" "<<imaginary<<"i\n";
    }

    void add(complex second_number){
        cout<<real+second_number.real<<" "<<imaginary+second_number.imaginary<<"i\n";
    };
};

//main function
int main(){
    complex number_1 , number_2;
    //taking input
    number_1.setvalue(1,2);
    number_2.setvalue(2,3);
    
    //printing values
    number_1.print();
    number_2.print();

    //adding values 
    number_1.add(number_2);
}
