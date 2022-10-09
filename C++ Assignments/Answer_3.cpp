#include<iostream>
using namespace std;


class Product{
private:
    int price;
    int mrp;
public:
    Product(){price = 0; mrp = 0;}
    Product(int price , int mrp){
        this->mrp = mrp;
        this->price = price;
    }
    void setData(int price , int mrp){
        this->price = price;
        this->mrp = mrp;
    }
    int get_price(){
        cout<<"i am get_price"<<endl;
        return price;
    }
    int get_mrp(){
        cout<<"i am get mrp"<<endl;
        return mrp;
    }
};

class Items{
private:
    int p;
    int m;
public:
    Items(){p = 0; m = 0;}
    Items(int p , int m){
        this->m = m;
        this->p = p;
    }
    Items(Product temp){
        cout<<"i am pc of items"<<endl;
        p = temp.get_price();
        m = temp.get_price();
    }
    void operator=(Items temp){
        cout<<"i am operator =";
        p = temp.p;
        m = temp.m;
    }
};
//Items temp = p1;

int main(){
    Items i1;
    Product p1;
    p1.setData(3,4);
    i1 = p1;
    return 0;
}