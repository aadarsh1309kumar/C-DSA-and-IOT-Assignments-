#include<iostream>
using namespace std;

void* operator new(size_t size){
    cout<<"i am running.....\n";
    void *p = malloc(size);
    return p;
}
void operator delete(void * s){
    cout<<"i am running\n";
    free(s);
}


class Student{
    string Name;
    int RollNo;

    public:
    void setData(string Name , int RollNo){
        this->Name = Name;
        this->RollNo = RollNo;
    }

    void display(){
        cout<<"i am woekingdskfjksd\n";
        cout<<"Name: "<<Name<<"\nRoll No: "<<RollNo<<endl;
    }
};

int main(){
    Student *s1 = new Student();
    s1->setData("vishal",23);
    s1->display();
    delete(s1);
}