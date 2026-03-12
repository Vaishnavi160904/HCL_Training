/*4.	In a MathOps utility, overload pow(int,int) 
and pow(double,double) (compile time). 
In a Function hierarchy, override evaluate(double) (runtime). 
Write a driver that shows 
resolution differences at compile vs. run time.*/

#include <iostream>
#include <cmath>
using namespace std;

class MathOps{
    public:
        int pow(int a,int b){
            return std::pow(a,b);
        }
        double pow(double a,double b){
            return std::pow(a,b);
        }
};
class Function{
    public:
        virtual void evaluate(double x){
            cout<<"Function: "<<x*x<<endl;
        }
};
class Derived :public Function{
    public:
        void evaluate(double x){
            cout<<"Derived: "<<x*x<<endl;
        }
};
int main(){
    MathOps m;
    cout<<m.pow(2,3)<<endl;
    cout << m.pow(2.1, 3.2) << endl;
    
    Function* ptr;
    Derived d;
    ptr=&d;
    ptr->evaluate(3.5);
}