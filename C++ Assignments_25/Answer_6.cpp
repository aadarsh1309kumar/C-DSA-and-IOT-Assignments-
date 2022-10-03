#include<iostream>
using namespace std;

class square{

    public:
    int square_function(int number){
        number *= number;
        cout<<"\nSquare of "<<number/2<<" is: "<<number;
        return 1;
    }
};

//main function
int main(){
    square number1;
    int count = 0;
    count += number1.square_function(2);
    count += number1.square_function(3);
    count += number1.square_function(3);
    cout<<"\nYour function is called "<<count<<" times"; 




}