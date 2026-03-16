/*1.	Implement #define SQR(x) ((x) * (x)). 
Demonstrate the bug with SQR(a + b) 
if parentheses are omitted, 
then fix and write a unit test comparing 
macro vs. inline function.*/

#include <iostream>
using namespace std;

#define SQR(x) ((x)*(x))

inline int sqr(int n){
    return n*n;
}
int main(){
    int a=5,b=3;
    cout<<SQR(a+b)<<endl;
    cout<<sqr(a+b)<<endl;
}