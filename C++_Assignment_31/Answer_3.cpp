#include<iostream>
using namespace std;

class multi1{
private:
    string name;
    int subject1;
    int subject2;
    int subject3;
protected:
    int getsub1(){
        return subject1;
    }
    int getsub2(){
        return subject2;
    }
    int getsub3(){
        return subject3;
    }
    void setData(string name,int sub1, int sub2,int sub3){
        this->name = name;
        subject1 = sub1;
        subject2 = sub2;
        subject3 = sub3;
    }
};

class multi2:public multi1{
protected:
    int totalMarks(){
        return (getsub1() + getsub2() + getsub3());
    }
};

class multi3:public multi2{
    public:
    void showPercentage(){
        float temp = totalMarks();
        temp/=300;
        temp*=100;
        cout<<temp;
    }
    void setData_(string name , int sub1_ , int sub2_,int sub3_){
        setData(name , sub1_ , sub2_ , sub3_);
    }
};

int main(){
    multi3 m1;
    m1.setData_("Aadarsh",0,0,100);
    m1.showPercentage();
}