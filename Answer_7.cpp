#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollno;

    public:
    Student(){};
    Student(string name , int rollno){
        this->name = name;
        this->rollno = rollno;
    }
    void display(){
        cout<<name<<endl<<rollno;
    }
    void operator!();
};

int main(){
    Student s1("vishal",123) , s2("simran",345);
    !s1;
    s1.display();
}

void Student:: operator!(){
    for(int i = 0; name[i]; i++){
        if(name[i] >= 65 && name[i] <= 90){
            name[i] += 32;
        }
        else if(name[i] >= 97 && name[i] <= 122){
            name[i] -= 32;
        }
    }
}