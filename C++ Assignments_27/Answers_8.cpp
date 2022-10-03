//consider a class Matrix
#include<iostream>
using namespace std;

class Matrix{
    private:
    int array[3][3];
    
    public:
    Matrix(){};
    
    void input(){
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                cin>>array[i][j];
            }
        }
    }
    void output(){
        for(int i = 0; i<3; i++){
            for(int j = 0;  j< 3; j++){
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    void operator-(){
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                array[i][j] = -array[i][j];
            }
        }
    }
};

int main(){
    Matrix m1;
    m1.input();
    -m1;
    m1.output();
}