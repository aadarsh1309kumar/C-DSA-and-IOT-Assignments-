#include<iostream>
using namespace std;

class Invent1{
private:
    int a;
    int b;
public:
    Invent1(){a = 0; b = 0;}
    Invent1(int a , int b){
        this->a = a;
        this->b = b;
    }
    operator int(){
        return (a+b);
    }
    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }
};

class Invent2{
private:
    int c;
    int d;
public:
    Invent2(){c = 0; d = 0;}
    Invent2(int c , int d){
        cout<<"i am pc of invent 2"<<endl;
        this->c = c;
        this->d = d;
    }
    Invent2(Invent1 object){
        cout<<"i am pc of invent2"<<endl;
        c = object.get_a();
        d = object.get_b();
    }
    void operator=(Invent2 object){
        cout<<"i am operator = of class invent2"<<endl;
        c = object.c;
        d = object.d;
    }
};


int main(){
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv = s1;
    d1 = s1;
    //invent2 object = s1;
    return 0;
}