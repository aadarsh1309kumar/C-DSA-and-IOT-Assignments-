#include<iostream>
using namespace std;


class Rupee{
private:
    int rupee;
public:
    Rupee(){rupee = 0;}
    Rupee(const int rupee){
        this->rupee = rupee;
    }
    void operator=(Rupee object){
        cout<<"i am operator in class rupee"<<endl;
        rupee = object.rupee;
    }
    int get_rupee(){
        return rupee;
    }
    void display(){
        cout<<rupee<<endl;
    }
};

class Dollar{
private:
    float dollar;
public:
    Dollar(){dollar = 0;}
    Dollar(Rupee temp){
        cout<<"i am dollar pc"<<endl;
        float temp_ = temp.get_rupee();
        dollar = temp_/60;
    }
    void display(){
        cout<<dollar<<endl;
    }
    operator Rupee(){
        cout<<"i am rupee typecase in class dollar"<<endl;
        Rupee r(dollar * 60);
        return r;
    }
};

int main(){
    Rupee r = 60;
    Dollar d = r;

    d.display();
    r.display();

    r = d;
    //r = r
    d.display();
    r.display();
}