/*2.Demonstrate accessing structure members using
 a pointer and the -> operator.*/

 #include <iostream>
 using namespace std;
 struct Student{
    string name;
    void display(){
        cout<<name;
    }
 };
 int main(){
    Student s={"sam"};
    Student *ptr=&s;
    ptr->display();
 }