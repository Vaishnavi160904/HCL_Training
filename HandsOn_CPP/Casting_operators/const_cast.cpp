/*2.	Implement a class with a setValue() method 
that incorrectly uses const_cast to modify a const member.*/
#include<iostream>
using namespace std;
class Demo{
    public:
        const int value;
        Demo(int v):value(v){};

        void setvalue(int v){
            int *ptr=const_cast<int*> (&value);
            *ptr=v;
        }
        void display(){
            cout<<value<<endl;
        }
};
int main(){
    Demo d1(30);
    d1.display();
    d1.setvalue(40);
    d1.display();
}