#include<iostream>
using namespace std;

//main function
int main(){
    int array[10] , sum = 0;
    cout<<"Enter elements of array: ";
    for(int i = 0; i<10; i++){
        cin>>array[i];
        sum += array[i];
    };

    cout<<"your sum is: "<<sum;
};