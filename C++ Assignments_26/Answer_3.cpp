#include<iostream>
using namespace std;

//class
class cube{
    private: 
    int s;

    public:
    cube(int side){
        s = side;
    }
    
    void setValue(int side){
        s = side;
    }

    void volume(){
        cout<<"Volume of cube is : "<<s*s*s;
    }
};

int main(){
    cube c(2);
    c.volume();
}
