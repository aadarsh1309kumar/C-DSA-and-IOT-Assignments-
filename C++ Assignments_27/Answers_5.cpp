//consider following class Numbers
#include<iostream>
using namespace std;

class Number{
    private:
        int x;
        int y;
        int z;
    
    public:
        Number(){};
        Number(int x , int y , int z){
            this->x = x;
            this->y = y;
            this->z = z;
        }
        void operator-(){
            x = -x;
            y = -y;
            z = -z;
        }
        void display(){
            cout<<x<<endl<<y<<endl<<z;
        }
};

int main(){
    Number n1(1,2,3);
    -n1;
    n1.display();
}