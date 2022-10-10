#include<iostream>
using namespace std;

class Customer{
private:
    string name;
    long long int phoneNO;
protected:
    void setName(string name){
        this->name = name;
    }
    void setPhoneNo(long long int phoneNo){
        cout<<"i am setter"<<endl;
        this->phoneNO = phoneNo;
    }
    string getName(){
        return name;
    }
    long long int getPhoneNo(){
        return phoneNO;
    }
};

class Depositor:public Customer{
private:
    long long int accountNo;
    float balance;
protected:
    void setAccountNo(long long int accountNo){
        this->accountNo = accountNo;
    }
    void setBalance(float balance){
        this->balance = balance;
    }
    long long int getaccountNo(){
        return accountNo;
    }
    float getbalance(){
        return balance;
    }
};

class Borrower:public Depositor{
private:
    int loanNo;
    int loanAmount;
    static int count;
protected:
    void setloanNo(int loanNO){
        this->loanNo = loanNO;
    }
    void setloanamt(int loanAmount){
        this->loanAmount = loanAmount;
    }
public:
    void setData(string name , long long int phoneno, long long int customerAC , float balance , int loanno , int loanamount){
        count++;
        setName(name);
        setPhoneNo(phoneno);
        setAccountNo(customerAC);
        setBalance(balance);
        this->loanNo = loanno;
        this->loanAmount = loanamount;
    }
    void showData(){
        for(int i = 0; i<count; i++){
            cout<<"Customer "<<i+1<<" details "<<endl<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"Customer name            : "<<this[i].getName()<<endl;
            cout<<"Customer phone number   : "<<this[i].getPhoneNo()<<endl;
            cout<<"Customer A/C no         : "<<this[i].getaccountNo()<<endl;
            cout<<"Balance                 : "<<this[i].getbalance();
            cout<<endl<<"--------------------------------------"<<endl;
            cout<<"Loan No                 : "<<this[i].loanNo<<endl;
            cout<<"Loan Amount              : "<<this[i].loanAmount<<endl;
            cout<<endl<<"--------------------------------------"<<endl;
        }
    }
};
int Borrower :: count;

int main(){
    int size;
    cout<<"Enter no. of customer Details you want to enter: ";
    cin>>size;
    Borrower b[size];

    for(int i = 0; i<size; i++){
        system("cls");
        string name;
        long long int phoneno , accountno;
        float balance;
        int loanno, loanamount;
        cout<<"Enter customer name     : ";
        cin>>name;
        cout<<"Enter Customer phone no : ";
        cin>>phoneno;
        cout<<"Enter customer A/C no   : ";
        cin>>accountno;
        cout<<"Enter Balance           : ";
        cin>>balance;
        cout<<"Enter Loan NO           : ";
        cin>>loanno;
        cout<<"Enter Loan Amount       : ";
        cin>>loanamount;
        b[i].setData(name,phoneno,accountno,balance,loanno,loanamount);
        cout<<"-----------------------------------";
    }
    b->showData();
}
