#include<iostream>
using namespace std;

class Integer{
private:
    int number;
public:
    
    Integer(){
        number = 0;
    }
    Integer(const int number){
        this->number = number;
    }
    void display(){
        cout<<number;
    }
    operator int (){
        return number;
    }
};

int main(){
    Integer i1(12);
    int x;
    x = (int)i1;
    cout<<x;
}