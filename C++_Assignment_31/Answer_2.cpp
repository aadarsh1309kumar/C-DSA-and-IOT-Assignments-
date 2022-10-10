#include<iostream>
using namespace std;

class number{
private:
    int a;
    int b;
public:
    int geta(){
        return a;
    }
    int getb(){
        return b;
    }
    void setNumbers(int a , int b){this->a = a; this->b = b;}
};

class add:public number{
public:
    int sum(){
        int temp = geta() + getb();
        return temp;
    }
};

int main(){
    add a1;
    a1.setNumbers(1,2);
    cout<<a1.sum();
}