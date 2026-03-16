/*1.Define an enum Color { RED, GREEN, BLUE }; 
and convert Color to int using static_cast*/

#include <iostream>
using namespace std;
enum COLOR {RED,GREEN,BLUE};

int main(){
    COLOR c=RED;
    int v=static_cast<int>(c);
    cout<<v;
}