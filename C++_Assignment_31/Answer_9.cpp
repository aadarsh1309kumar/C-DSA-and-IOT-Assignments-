#include<iostream>
using namespace std;


class Student{
private:
    string name;
    int id;
protected:
    void setName(string name){
        this->name = name;
    }
    void setId(int id){
        this->id = id;
    }
    string getName(){
        return name;
    }
    int getId(){
        return id;
    }
};

class StudentExams:public Student{
private:
    float subject1 , subject2 , subject3, subject4, subject5, subject6;
protected:
    void setsub1(float sub1){ subject1 = sub1; }
    void setsub2(float sub2){ subject2 = sub2; }
    void setsub3(float sub3){ subject3 = sub3; }
    void setsub4(float sub4){ subject4 = sub4; }
    void setsub5(float sub5){ subject5 = sub5; }
    void setsub6(float sub6){ subject6 = sub6; }
    //getters
    int getsub1(){ return subject1; }
    int getsub2(){ return subject2; }
    int getsub3(){ return subject3; }
    int getsub4(){ return subject4; }
    int getsub5(){ return subject5; }
    int getsub6(){ return subject6; }
};

class StudentResult:public StudentExams{
private:
    float percentage;
    string result;
    static int count;
public:
    void setData(float sub1 , float sub2 , float sub3 , float sub4, float sub5 , float sub6 , string name , int rollno){
        count++;
        setsub1(sub1);setsub2(sub2);
        setsub3(sub3);setsub4(sub4);
        setsub5(sub5);setsub6(sub6);
        setName(name);setId(rollno);
    }
    void showMarksheet(){
        for(int i = 0; i<count; i++){
            cout<<"----------------------------------------------------"<<endl;
            cout<<"Roll no                  : "<<this[i].getId()<<endl;
            cout<<"Student name            : "<<this[i].getName()<<endl;
            cout<<endl;
            cout<<"Marks of Subject 1       :"<<this[i].getsub1()<<endl;
            cout<<"Marks of Subject 2       :"<<this[i].getsub2()<<endl;
            cout<<"Marks of Subject 3       :"<<this[i].getsub3()<<endl;
            cout<<"Marks of Subject 4       :"<<this[i].getsub4()<<endl;
            cout<<"Marks of Subject 5       :"<<this[i].getsub5()<<endl;
            cout<<"Marks of Subject 6       :"<<this[i].getsub6()<<endl;
            float temp = (this[i].getsub1()+this[i].getsub2()+this[i].getsub3()+this[i].getsub4()+this[i].getsub5()+this[i].getsub6());
            temp = temp/600*100;
            cout<<endl;
            cout<<"Total percentage        : "<<temp<<endl;
            result = temp>32?"pass":"Fail";
            cout<<"Status                  : "<<result<<endl;
        }
    }
};
int StudentResult:: count;

int main(){
    int size;
    cout<<"Enter No. of students you want? : ";
    cin>>size;
    system("cls");
    StudentResult s[size];
    
    for(int i = 0; i<size; i++){
        float sub1,sub2,sub3,sub4,sub5,sub6;
        string name;
        int rollno;
        cout<<"Enter roll no           : ";
        cin>>rollno;
        cout<<"Enter Student name      : ";
        cin>>name;
        cout<<"Enter Marks for subject 1: ";
        cin>>sub1;
        cout<<"Enter Marks for subject 2: ";
        cin>>sub2;
        cout<<"Enter Marks for subject 3: ";
        cin>>sub3;
        cout<<"Enter Marks for subject 4: ";
        cin>>sub4;
        cout<<"Enter Marks for subject 5: ";
        cin>>sub5;
        cout<<"Enter Marks for subject 6: ";
        cin>>sub6;
        s[i].setData(sub1,sub2,sub3,sub4,sub5,sub6,name,rollno);
        system("cls");
    }
    s->showMarksheet();
}