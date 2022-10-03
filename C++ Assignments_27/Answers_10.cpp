#include<iostream>
using namespace std;

class Matrix{
    private:
        int array[3][3];
    
    public:
        void input(){
            for(int i = 0; i<3; i++){
                for(int j = 0; j<3; j++){
                    cin>>array[i][j];
                }
            }
        }

        void output(){
            for(int i = 0; i<3; i++){
                for(int j = 0; j<3; j++){
                    cout<<array[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        Matrix operator+(Matrix &object){
            Matrix temp;
            for(int i = 0; i<3; i++){
                for(int j = 0; j<3; j++){
                    temp.array[i][j] = array[i][j] + object.array[i][j];
                }
            }
            return temp;
        }
};

int main(){
    Matrix m1 , m2 , m3;
    m1.input();
    m2.input();
    m3 = m1+m2;
    m3.output();
}