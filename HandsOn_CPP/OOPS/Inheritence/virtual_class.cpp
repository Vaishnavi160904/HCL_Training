/*5.	Create classes: Device → Phone & Camera → SmartPhone
Use virtual base classes to avoid duplicate Device members.
*/

#include <iostream>
using namespace std;

class Device{
    protected:
        string name;
        string brand;
    public:
        void setvalue(string s,string b){
            name=s;
            brand=b;
        }
};

class Phone : virtual public Device{};
class Camera: virtual public Device{};

class Smartphone: public Phone ,public Camera{
    public: 
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Brand: "<<brand<<endl;
        }
};

int main(){
    Smartphone s;
    s.setvalue("Galaxy S23", "Samsung");
    s.display();
}