//creating a class Cstring
#include<iostream>
#include<cstring>
using namespace std;


class Cstring{
    private:
        char *string;
        int size;
    
    public:
        Cstring(){
            string = new char;
            size = 1;
        }
        friend istream& operator>>(istream &input , Cstring &object){
            int i = 0;
            char c;
            while(true){
                c = getchar();
                object.size++;
                object.string = (char*)realloc(object.string,object.size*sizeof(char));
                if(c == '\n'){
                    break;
                }
                object.string[i] = c;
                i++;
            }
            object.size -= 2;
            object.string[object.size] = '\0';
            c = '0';
            return input;
        }

        void display(){

            cout<<string;
        }
        Cstring& operator+(Cstring &object){
            Cstring temp_;
            Cstring &temp = temp_;
            strcpy(temp.string,string);
            strcat(temp.string , object.string);
            return temp;
        //     int i = 0;
        //     Cstring temp;
        //     temp.size = object.size + size + 1;
        //     cout<<temp.size;
        //     temp.string = (char*)realloc(temp.string,temp.size*sizeof(char));
        //     for(i = 0; string[i] ; i++){
        //         cout<<i<<endl;
        //         temp.string[i] = string[i];
        //     }
        //     cout<<i<<endl;
        //     temp.string[i] = ' ';
        //     for(int j = 0; object.string[j]; j++ , i++){
        //         cout<<endl<<i<<endl;
        //         temp.string[i+1] = object.string[j];
        //     }
        //     cout<<i;
        //     cout<<temp.size;
        //     temp.string[i+1] = '\0';
        //     return temp;
        }

        Cstring operator=(Cstring &object){
            free(string);
            size = object.size;
            string = (char*)malloc(size*sizeof(char));
            strcpy(string,object.string);
            return object;
        }
};

int main(){
    Cstring s1 , s2 , s3;
    cin>>s1>>s2;
    s3 = s1+s2;
    s3.display();
}