/*1.	Define a struct Address inside struct Employee.
 Read and display complete employee details.*/

 #include <iostream>
 using namespace std;
 struct Employee{
    char name[20];
    double salary;
 };
 struct Address{
    Employee e;
    char address[50];
 };
 int main(){
    Address a={{"sam",100000},"namakkal"};

    cout<<"Name: "<<a.e.name<<endl;
    cout<<"salary: "<<a.e.salary<<endl;
    cout<<"address: "<<a.address<<endl;
 }