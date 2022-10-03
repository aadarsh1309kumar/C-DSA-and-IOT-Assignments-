#include<iostream>
using namespace std;

class complex{
    private:
    int a;
    int b;
    
    public:
    complex(){
        a = 0;
        b = 0;
    };
    
    void setData(int x , int y){
        a = x; 
        b = y;
    };

    void showData(){
        cout<<"Real part: "<<a<<endl<<"Imaginary part: "<<b;
    }

    complex add(complex C){
        complex temp;
        temp.a = a+C.a;
        temp.b = b+C.b;
        return temp;
    }
};

int main(){
    complex c1, c2 , c3;
    c1.setData(1,2);
    c2.setData(2,3);
    c3 = c2.add(c1);
    c3.showData();
}
