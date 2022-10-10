#include<iostream>
using namespace std;

class Person{
private:
    string name;
    string address;
    long long int phone_no;
protected:
    Person(){name = ""; address = ""; phone_no = 0;}
    void setName(string name){
        this->name = name;
    }
    void setAddress(string address){
        this->address = address;
    }
    void setPhone(long long int phone_no){
        this->phone_no = phone_no;
    }
    string getName(){
        return name;
    }
};
class Employee:public Person{
private:
    int eno;
protected:
    Employee(){eno = 0;}
    void setename(string name){
        setName(name);
    }
    void seteno(int eno){
        this->eno = eno;
    }
};

class Manager:public Employee{
private:
    string designation;
    string department;
    float salary;
    static int k; 
public:
    Manager(){designation = ""; department = ""; salary = 0;}
    void setData(int empNO , string name , string address , long long int phoneNo , string designamtion , string department_name , float salary){
        k++;
        seteno(empNO);
        setename(name);
        setAddress(address);
        setPhone(phoneNo);
        this->designation = designamtion;
        department = department_name;
        this->salary = salary;
    }
    void HigherSalary(){
        Manager m1;
        for(int i = 0; i<k; i++){
            if(m1.salary < this[i].salary){
                m1 = this[i];
            }
        }
        cout<<"Manager with highest salary is: "<<m1.salary<<endl<<"Manager name : "<<m1.getName();
    }
};
int Manager :: k;

int main(){
    int size;
    cout<<"How Many Managers You Want To Enter? : ";
    cin>>size;
    system("cls");
    Manager m1[size];

    for(int i = 0; i<size; i++){
        int employeeid;
        string name , address, designation , destination , departmentname ;
        float basicsalary;
        long long int phoneno;
        cout<<"Enter manager "<<i+1<< " details."<<endl;
        cout<<"Enter Employee no. : ";
        cin>>employeeid;
        cin.ignore();
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter address: ";
        cin>>address;
        cout<<"Enter phone number: ";
        cin>>phoneno;
        cin.ignore();
        cout<<"Enter designation: ";
        cin>>designation;
        cout<<"Enter department name: ";
        cin>>departmentname;
        cout<<"Enter Basic salary: ";
        cin>>basicsalary;
        system("cls");
        m1[i].setData(employeeid,name,address,phoneno,designation,departmentname,basicsalary);
    }
    m1->HigherSalary();
}