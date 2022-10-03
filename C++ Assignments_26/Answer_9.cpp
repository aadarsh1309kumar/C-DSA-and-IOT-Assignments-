#include<iostream>
using namespace std;

class Bill{
    private:
    char* name = (char*)malloc(sizeof(char));
    int units;

    public:
    void get(char* n , int units_){
        name = n;
        units = units_;
    }

    void calculate(){
        if(units <= 100){
            cout<<"Name"<<name<<endl<<"Your total payable amount is: "<<1.20*units;
        }
        else if(units > 100 && units <= 200){
            cout<<"Name: "<<name<<endl<<"Your total payable amount is: "<<2*units;
        }
        else{
            cout<<"Name: "<<name<<endl<<"Your total payable amount is: "<<3*units;
        }
    }
};

int main(){
    char name[20] = {"vishal"};
    Bill u1;
    u1.get(name,10);
    u1.calculate();
}