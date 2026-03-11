/*3.	Create classes: Device → Mobile → Smartphone
Add features at each level and show how derived
 class accesses base class members.
*/

#include <iostream>
using namespace std;

class Device{
    protected:
        string name;
        string brand;
};
class Mobile: public Device{
    protected:
        int battery_capacity;
        string sim;

};
class Smartphones:public Mobile{
    protected:
        string os;
        string camera;
    public:
        void adddetails(string n,string b,int b_c,string s,string o,string c){
            name=n;
            brand=b;
            battery_capacity=b_c;
            sim=s;
            os=o;
            camera=c;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Brand: "<<brand<<endl;
            cout<<"battery capacity: "<<battery_capacity<<endl;
            cout<<"sim: "<<sim<<endl;
            cout<<"os: "<<os<<endl;
            cout<<"camera: "<<camera<<endl;
        }
};

int main(){
    Smartphones s;
    s.adddetails("Galaxy S23", "Samsung", 5000, "Dual SIM", "Android", "108MP");
    s.display();
}