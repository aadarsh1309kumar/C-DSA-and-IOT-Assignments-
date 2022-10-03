#include<iostream>
using namespace std;

class StaticCount{
    private:
    static int k;
    
    public:
    void function(){
        k++;
    }
    void display(){
        cout<<k;
    }
};
int StaticCount:: k;

int main(){
    StaticCount c1;
    c1.function();
    c1.function();
    c1.function();
    c1.function();
    c1.function();
    c1.function();
    c1.display();
}