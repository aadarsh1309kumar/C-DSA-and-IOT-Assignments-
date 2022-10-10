#include<iostream>
using namespace std;

bool palindrome(int number){
    int temp = number , reverse = 0, remainder = 0;
    if(number<0){
        return false;
    }
    while(temp != 0){
        remainder = temp%10;
        reverse = reverse*10 + remainder;
        temp/=10;
    }
    if(reverse == number){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int number = -121;
    if(palindrome(number)){
        cout<<"yes it is a palaindrome";
    }
    else{
        cout<<"no it is not a plainderome";
    }
}