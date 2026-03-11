/*4.	Create classes: Teacher + Researcher → Professor
Demonstrate multiple inheritance and method overriding.
*/
#include <iostream>
using namespace std;

class Teacher{
    protected:
        string name;
        void display(){
            cout<<"Class Teacher"<<endl;
            cout<<"Name: "<<name<<endl;
        }
};
class Researcher{
    protected:
        int publications;
        void display(){
            cout<<"Class Researcher"<<endl;
            cout<<"No of publications: "<<publications<<endl;
        }
};
class Professor: public Teacher,public Researcher{
    public:
        void add_details(string n,int p){
            name=n;
            publications=p;
        }
        void display(){
            cout<<"class professor"<<endl;
            cout << "Name: " << name << endl;
            cout << "No of publications: " << publications << endl;
        }
};

int main(){
    Professor p;
    p.add_details("asd",16);
    p.display();
}