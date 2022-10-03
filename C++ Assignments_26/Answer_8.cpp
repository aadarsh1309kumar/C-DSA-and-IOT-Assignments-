#include<iostream>
using namespace std;

class Bank{
    private:
    char* n = (char*)malloc(sizeof(char));
    int principle;
    int year;
    static int rate_of_interest;
    
    public:
    Bank(char *name , int principle_amount , int no_of_years){
        n = name;
        principle = principle_amount;
        year = no_of_years;
    };

    void display(){
        cout<<"Name: "<<n<<endl<<"Principle_amount: "<<principle<<endl<<"No of years: "<<year<<endl;
    }

    void simple_interest(){
        cout<<"Your simple interest is: "<<principle*0.03*year<<endl<<endl;
    }
    ~Bank(){
        free(n);
    }
};
int Bank::rate_of_interest = 3;

int main(){
    char user1[10] = {"vishal"};
    char user2[10] = {"mahesh"};
    Bank user_1(user1,10000,1);
    Bank user_2(user2,20000,1);
    user_1.display();
    user_1.simple_interest();
    user_2.display();
    user_2.simple_interest();
}