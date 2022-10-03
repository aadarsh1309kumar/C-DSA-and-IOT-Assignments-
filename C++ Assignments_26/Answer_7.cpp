#include<iostream>
using namespace std;

class box{
    private:
    int l;
    int b;
    int h;

    public:
    box(int length , int breath , int height){
        l = length;
        b = breath;
        h = height;
    }

    void setData(int length , int breath , int height){
        l = length;
        b = breath;
        h = height;
    }

    void Volume(){
        cout<<l*b*h;
    }
};

int main(){
    box b1(1,2,3);
    b1.Volume();
} 