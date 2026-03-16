/*3.Convert an integer address to a pointer 
using reinterpret_cast and explain why this is unsafe*/

#include <iostream>
using namespace std;
int main(){
    int a=1000;
    int* ptr=reinterpret_cast<int*> (&a);
    cout<<*ptr<<endl; 
}