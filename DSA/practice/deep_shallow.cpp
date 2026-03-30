#include <iostream>
#include <cstring>
using namespace std;

class Employee{
    private:
        int id;
        char *name;
        int salary;
    public:
        Employee(int i,const char *n,int s){
            id=i;
            name=new char[strlen(n)+1];
            salary=s;
            strcpy(name,n);
        }
        Employee(const Employee &e){
            id=e.id;
            salary=e.salary;
            name=new char[strlen(e.name)+1];
            strcpy(name,e.name);

            cout<<"Deep copy"<<endl;
        }
        void display(){
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
        }

        ~Employee(){
            delete[] name;
        }
};

class Demo{
    public:
        int *value;
        Demo(int v){
            value=new int;
            *value=v;
        }

        Demo(const Demo &e){
            value=new int;
            *value=*(e.value);
        }

};

int main(){
    Employee e1(1,"vaish",4000);
    Employee e2=e1;

    cout<<"Emp1 details: "<<endl;
    e1.display();

    cout<<"Emp2 details: "<<endl;
    e2.display();

    Demo d1(10);
    Demo d2=d1;

    *d2.value=30;
    cout<<"d1 value: "<<*d1.value<<endl;
    cout << "d2 value: " <<*d2.value << endl;
}