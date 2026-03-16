/*5.Write a program that throws MyException 
when a negative salary is entered.*/

#include <iostream>
using namespace std;
class MyException{
    public:
        void check(){
            cout<<"Negative salary";
        }
};
int main(){
    double salary;
    cin>>salary;
    try{
        if (salary<0){
            throw MyException();
        }
        cout<<"Valid salary";
    }catch (MyException e){
        e.check();
    }
}