#include<iostream>
using namespace std;

class largest_digit{
    public:
    void largest(int number){
        int temp = 0;
        while(number){
            if(temp < number%10){
                temp = number%10;
            }
            number/=10;
        }
        cout<<"Largest digit in your number is: "<<temp;
    }
};

//main function
int main(){
    largest_digit object;
    object.largest(1934);
}