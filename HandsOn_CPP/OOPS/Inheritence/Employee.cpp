/*2. Create a base class Employee with 
name and salary. Derive Manager that 
adds department. Implement a 
function to display all details.*/
#include <iostream>
using namespace std;

class Employee{
    public:
        string name;
        int salary;

};
class Manager: public Employee{
    public:
        string dept;

        void setvalues(string n,int s,string d){
            name=n;
            salary=s;
            dept=d;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Depatment: "<<dept<<endl;
        }
};
int main(){
    Manager m1;
    m1.setvalues("Abi",50000,"HR");
    m1.display();
}