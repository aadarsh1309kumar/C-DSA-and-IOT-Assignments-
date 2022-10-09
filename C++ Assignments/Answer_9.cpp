#include<iostream>
using namespace std;

class Dollar{
private:
    int dollar;
public:
    Dollar(){dollar = 0;}
    Dollar(const int number){
        dollar = number;
    }
    void display(){
        cout<<dollar<<endl;
    }
};


int main(){
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    return 0;

}