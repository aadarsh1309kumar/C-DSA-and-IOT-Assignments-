//create a class time which contains.
#include<iostream>
using namespace std;

class Time{
    private:
        int Hours;
        int Minutes;
        int Seconds;
    
    public:
        static int count;
        Time(){};
        Time(int Hours , int Minutes , int Seconds){
            this->Hours = Hours;
            this->Minutes = Minutes;
            this->Seconds = Seconds;
        }
        Time(Time &object){
            Hours = object.Hours;
            Minutes = object.Minutes;
            Seconds = object.Seconds;
        }
        friend istream& operator>>(istream &input , Time &object){
            cout<<endl<<"Enter "<<count+1<<" Time"<<endl<<endl;
            count++;
            cout<<"Enter Hours: ";
            input>>object.Hours;
            cout<<"Enter minutes: ";
            input>>object.Minutes;
            cout<<"Enter seconds: ";
            input>>object.Seconds;
            //correcting the time
            object.Minutes = object.Minutes + object.Seconds/60;
            object.Seconds%=60;
            object.Hours = object.Hours + object.Minutes/60;
            object.Minutes%=60;
            if(object.Hours >= 25){
                printf("Your time is invalid");
                exit(0);
            }
            return input;
        }
        friend ostream& operator<<(ostream &output , Time &object){
            output<<"Hours : "<<object.Hours<<endl<<"Minutes : "<<object.Minutes<<endl<<"Seconds : "<<object.Seconds<<endl;
        }
        bool operator>(Time &object){
            if(Hours > object.Hours){
                return true;
            }
            else{
                if(Hours == object.Hours){
                    if(Minutes > object.Minutes){
                        return true;
                    }
                    else{
                        if(Minutes == object.Minutes){
                            if(Seconds > object.Seconds){
                                return true;
                            }
                        }
                    }
                }
            }
            return false;
        }
};
int Time::count;

int main(){
    Time t1 , t2 , t3;
    cin>>t1>>t2;

    if(t1>t2){
        printf("time is same");
    }
}