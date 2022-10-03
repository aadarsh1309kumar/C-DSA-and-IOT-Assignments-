#include<iostream>
#include<cstring>
using namespace std;

class Cstring{
    private:
        char *name;
        int size;
    
    public:
        Cstring(){
            name = new char;
        }
        void input(){
            cin.getline(name,20);
        }
        void output(){
            cout<<name;
        }
        void operator!(){
            for(int i = 0; name[i] ; i++){
                if(name[i] >= 65 && name[i] <= 90){
                    name[i] += 32;
                }
                else if(name[i] >= 97 && name[i] <= 122){
                    name[i] -= 32;
                }
            }
        }
};

int main(){
    Cstring c1;
    c1.input();
    !c1;
    c1.output();
}