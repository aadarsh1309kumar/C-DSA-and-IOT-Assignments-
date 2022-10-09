#include<iostream>
using namespace std;

class Rupee{
private:
    int rupee;
public:
    Rupee(){rupee = 0;}
    Rupee(const int number){
        cout<<"i am pc"<<endl;
        rupee = number;
    }
    operator int(){
        cout<<"i am typecase operator"<<endl;
        return rupee;
    }
};

int main(){
    Rupee r = 10;
    int x = r;
    cout<<x;
    return 0;
}