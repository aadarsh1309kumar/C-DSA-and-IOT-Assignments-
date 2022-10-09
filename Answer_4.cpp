#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollno;

    public:
    Student(){
        name = new char;
        rollno = 0;
    }
    Student(char *name , int rollno){
        for(int i = 0; name[i]; i++){
            this->name[i] = name[i];
        }
        this->rollno = rollno;
    }
    void operator()(string name , int rollno){
            this->name = name;
        this->rollno = rollno;
    }
    static void* operator new(size_t size){
        void *p = (char*)malloc(size*sizeof(char));
        return p;
    }
    static void operator delete(void *p){
        free(p);
    }
    void display(){
        cout<<name<<endl<<rollno;
    }
};

int main(){
    Student s1
    s1("vishal",12);
    s1.display();
}