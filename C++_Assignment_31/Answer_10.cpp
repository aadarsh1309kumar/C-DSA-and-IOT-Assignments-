#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

class Worker{
private:
    int code;
    string name;
    float salary;
protected:
    void setName(string name){
        this->name = name;
    }
    void setCode(int code){
        this->code = code;
    }
    void setSalary(float salary){
        this->salary = salary;
    }
    float getsalary(){
        return salary;
    }
    string getname(){
        return name;
    }
    int getcode(){
        return code;
    }
};
class Officer{
private:
    float DA;
    float HRA;
protected:
    void setDA(float da){
        DA = da;
    }
    void setHRA(float hra){
        HRA = hra;
    }
    float getDa(){
        return DA;
    }
    float getHRA(){
        return HRA;
    }
};

class Manager:public Worker,Officer{
private:
    float TA;
    float GrossSalary;
    static int count;
public:
    void setDAta(string name , int code , float salary , float Da , float Hra){
        count++;
        setCode(code);
        setName(name);
        setSalary(salary);
        setDA(Da);
        setHRA(Hra);
    }
    void showData(){
        for(int i = 0; i<count; i++){
            cout<<"---------------------------"<<endl;
        cout<<"Manager Information"<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"Code                : "<<this[i].getcode()<<endl;
        cout<<"Name                : "<<this[i].getname()<<endl;
        cout<<"Salary              : "<<this[i].getsalary()<<endl;
        cout<<"DA                  : "<<this[i].getDa()<<endl;
        cout<<"HRA                 : "<<this[i].getHRA()<<endl;
        float tempTA = getsalary();
        tempTA = tempTA/100*10;
        float tempGS = getsalary();
        tempGS = tempGS + tempTA + this[i].getDa() + this[i].getHRA();
        cout<<"TA                  : "<<tempTA<<endl;
        cout<<"Gross Salary        : "<<tempGS<<endl;
        }    
    }
};
int Manager:: count;

int main(){
    int size;
    cout<<"Enter Manager count: ";
    cin>>size;
    system("cls");
    Manager m[size];

    for(int i = 0; i < size; i++){
        int code;
        float salary , Da,hra;
        string name;
        cout<<"Enter code         : ";
        cin>>code;
        cin.ignore();
        cout<<"Enter Name         : ";
        cin>>name;
        cout<<"Enter salary       : ";
        cin>>salary;
        cout<<"Enter DA           : ";
        cin>>Da;
        cout<<"Enter HRA          : ";
        cin>>hra;
        m[i].setDAta(name,code,salary,Da,hra);
    }
    m->showData();
}
