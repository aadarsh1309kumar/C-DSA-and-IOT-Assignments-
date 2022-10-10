#include<iostream>
using namespace std;

class Person{
private:
    string name;
    int age;
protected:
    void setName(string name){this->name = name;}
    void setAge(int age){this->age = age;}
public:
    string getName(){return name;}
    int getAge(){return age;}
};

class Employee: public Person{
private:
    int empid;
    float salary;
protected:
    void setEmpid(int emdid){this->empid = emdid;}
    void setSalary(float salary){this->salary = salary;}
public:
    int getEmpid(){return empid;}
    float getSalary(){return salary;}
    void setEmpid(string name , int age , int empid , float salary){
        setName(name);
        setAge(age);
        this->empid = empid;
        this->salary = salary;
    }
};

int main(){
    Employee emp;
    emp.setEmpid("vishal",12,1234,2300.8);
    cout<<emp.getName()<<endl;
    cout<<emp.getAge()<<endl;
    cout<<emp.getEmpid()<<endl;
    cout<<emp.getSalary()<<endl;
}