#include<iostream>
using namespace std;

class reverse_number{
    int reversed = 0;
    int power_function(int number , int power){
        for(int i = 0; i < power-1; i++){
            number *= 10;
        }
        return number;
    }
    
    public:
    void reverse(int number){
        int temp = number;
        int power = 0;
        while(temp){
            power++;
            temp/=10;
        }
        while(number){
            int a = number%10;
            reversed += power_function(a,power);
            power--;
            number/=10;
        }
        cout<<"Reverse of your number is: "<<reversed;
    }
};

int main(){
    reverse_number number_1;
    number_1.reverse(123456);
}