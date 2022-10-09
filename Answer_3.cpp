#include<iostream>
using namespace std;

class Array{
    private:
    int array[10];

    public:
    Array(){};
    Array(int *a){
        for(int i = 0; i<10; i++){
            array[i] = a[i];
        }
    }
    int operator[](int value){
        if(value >= 11){
            cout<<"your array is out of bound";
            exit(0);
        }
        return array[value];
    }
};

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    Array a1(array);
    cout<<a1[5];
}