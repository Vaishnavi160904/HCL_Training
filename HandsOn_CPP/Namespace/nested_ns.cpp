/*2.Define a nested namespace Company::HR 
with a function displayPolicy(). 
Access it from main().*/

#include <iostream>
using namespace std;

namespace Company::HR{
    void displayPolicy(){
        cout<<"Display policy"<<endl;
    }
}

int main(){
    Company::HR::displayPolicy();
}