/* 1.Create an Order class that owns a collection of line items 
(IDs and quantities). Provide addLineItem(int id, int qty) 
and totalItems(); show object creation, 
modification, and summary printing.*/
#include <iostream>
#include <vector>
using namespace std;

struct items{
    int id;
    int quantity;
};
class Order{
    private:
        vector<items> vec;
    public:
        void additems(int id,int qty){
            items item;
            item.id=id;
            item.quantity=qty;

            vec.push_back(item);
        }

        void total_items(){
            int total=0;

            for (auto value :vec){
                total+=value.quantity;
            }
            cout<<"total items: "<<total<<endl;
        }

        void print(){

            cout<<"summary: "<<endl;
            for(auto i:vec){
                cout<<"ID: "<<i.id<<" ";
                cout<<"quantity: "<<i.quantity<<endl;
            }
            total_items();
        }

};
int main(){
    Order o;
    o.additems(1,10);
    o.additems(2,20);
    o.additems(3,20);

    o.print();
}