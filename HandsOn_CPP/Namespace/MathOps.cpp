/*1.Define a namespace MathOps with functions
 add() and subtract(). Call them from main() 
 using the scope resolution operator.*/

 #include <iostream>
 using namespace std;

 namespace MathOps{
    void add(int a,int b){
        cout<<"Addition: "<<a+b<<endl;
    }
    void subtract(int a,int b){
        cout<<"Subtraction: "<<a-b<<endl;
    }
 }
 int main(){
    int a,b;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;
    MathOps::add(a,b);
    MathOps::subtract(a,b);
    return 0;
 }
