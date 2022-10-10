#include<iostream>
#include<cstring>
using namespace std;

class Person{
private:
    string name;
protected:
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
};

class Fulltime:public Person{
private:
    int daily_rate;
    int numberofdays;
    int salary;
protected:
    
};
class Employee:public Fulltime{
private:
    int employeeCode;
protected:
    void setEmployeeCode(int employeeCode){
        this->employeeCode = employeeCode;
    }
    int getEmployeeCode(){
        return employeeCode;
    }
};