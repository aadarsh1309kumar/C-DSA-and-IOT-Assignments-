#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    char* name;
    int rollno;
    
    public:
    Student(char* n , int r){
        name = n;
        rollno = r;
    }
    
    void showData(){
        cout<<name<<endl<<rollno;
    }
};

int main(){
    char name[20] = {"vishal tyagi"};
    Student s1(name,12);
    s1.showData();
}