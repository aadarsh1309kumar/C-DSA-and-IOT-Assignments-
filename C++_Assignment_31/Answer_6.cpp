#include<iostream>
#include<cstring>
using namespace std;

class manager{
private:
    char *name;
public:
    friend void exchange(manager);
};
class emp1{
private:
    char *name_;
public:
    void exchange(manager);
};



void emp1 :: exchange(manager m){
    strcpy(name_,m.name);
}