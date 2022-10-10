#include<iostream>
using namespace std;

class Item{
private:
    int itemNo;
    string name;
    float price;
protected:
    int getitemNo(){
        return itemNo;
    }
    string getname(){
        return name;
    }
    float getprice(){
        return price;
    }
    void setItemno(int itemno){
        itemNo = itemno;
    }
    void setname(string name){
        this->name = name;
    }
    void setprice(float price){
        this->price = price;
    }
};

class Discount_Item:public Item{
private:
    int discount;
    float discounted_price;
    static float whole_discount;
    static float total_price;
    static int count;
protected:
    int getdiscount(){
        return discount;
    }
public:
    void setData(string name , int itemno, float price , int discount){
        count++;
        setname(name);
        setItemno(itemno);
        setprice(price);
        this->discount = discount;
        float temp = price/100*discount;
        whole_discount += temp;
        discounted_price = price;
        discounted_price -= temp;
    }
    void showbill(){
        int i;
        for(i = 0; i<count; i++){
            cout<<"-------------------------------------"<<endl;
            cout<<"Item name: "<<this[i].getname()<<endl;
            cout<<"Item no: "<<this[i].getitemNo()<<endl;
            cout<<"Item price: "<<this[i].getprice()<<endl;
            cout<<"Discount percentage: "<<this[i].discount<<"%"<<endl;
            cout<<"Discounted price: "<<this[i].discounted_price<<endl;
            total_price += this[i].getprice();
        }
        if(i == count){
            cout<<"-------------------------------------"<<endl;
            cout<<"Total price: "<<total_price<<endl;
            cout<<"Total Discount: "<<whole_discount<<endl;
            cout<<"-------------------------------------"<<endl;
        }
    }
};
float Discount_Item:: total_price;
float Discount_Item::whole_discount;
int Discount_Item:: count;

int main(){
    int size;
    cout<<"How many items you want to enter? : ";
    cin>>size;
    system("cls");
    Discount_Item customers[size];
    for(int i = 0; i<size; i++){
        string itemname;
        int itemno , discount;
        float itemprice;
        cout<<"-------------------------------------"<<endl;
        cout<<"Enter Item Name: ";
        cin>>itemname;
        cout<<"Enter item no: ";
        cin>>itemno;
        cout<<"Enter item price: ";
        cin>>itemprice;
        cout<<"Enter discount percentage: ";
        cin>>discount;
        customers[i].setData(itemname,itemno,itemprice,discount);
        system("cls");
    }
    customers->showbill();
}