#include<iostream>
using namespace std;

class factorial{
    int f;

    public: 
    void set_factorial(int factorial){
        for(int i = factorial-1; i > 0; i--){
            factorial *= i;
        }
        f = factorial;
    }

    void display(){
        cout<<"your factorial is: "<<f<<"\n";
    }
};

//main function
int main(){
    factorial f_1;
    f_1.set_factorial(5);
    f_1.display();
}