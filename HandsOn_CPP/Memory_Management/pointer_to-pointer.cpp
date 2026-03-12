/*2.	Demonstrate a program that uses 
a pointer to a pointer to modify a variable’s value.*/
#include <iostream>
using namespace std;
int main(){
    int variable=10;
    int *p1=&variable;
    int **p2=&p1;

    **p2=10*10;
    cout<<"modify value: "<<variable<<endl;

}