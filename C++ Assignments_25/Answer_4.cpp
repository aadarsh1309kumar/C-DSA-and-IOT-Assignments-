#include<iostream>
using namespace std;

class largest_number{
    private:
    int n1;
    int n2;
    int n3;
    public:
    largest_number(int n1 , int n2 , int n3){
        this->n1 = n1;
        this->n2 = n2;
        this->n3 = n3;
    }
    int largest(){
        if(n1>n2){
            if(n1>n3){
                return n1;
            }
            else{
                return n3;
            }
    }
    else{
            if(n2>n3){
                return n2;
            }
            else{
                return n3;
            }
        }
    }
};

//main function
int main(){
    largest_number l1(1,20,3);
    int largest = l1.largest();
    cout<<largest;
}