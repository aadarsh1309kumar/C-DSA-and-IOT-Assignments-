#include<iostream>
using namespace std;

class Items{
private:
    int p;
    int m;
public:
    Items(){p = 0; m = 0;}
    Items(int p , int m){
        cout<<"constructor call of item class"<<endl;
        this->m = m;
        this->p = p;
    }
    void display(){
        cout<<p<<endl<<m<<endl;
    }
    void operator=(Items object){
        cout<<"I am = of items"<<endl;
        p = object.p;
        m = object.m;
    }
};

class Product{
private:
    int price;
    int mrp;
public:
    Product(){price = 0; mrp = 0;}
    void setData(int price , int mrp){
        this->mrp = mrp;
        this->price = price;
    }
    operator Items(){
        cout<<"i am typecase operator"<<endl;
        Items i(price , mrp);
        return i;
    }
};

int main(){
    Items i1;
    Product p1;
    p1.setData(3,4);
    i1 = p1;
    //i1 = i;
    i1.display();
    return 0;
}