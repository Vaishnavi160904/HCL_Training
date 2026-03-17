/*2.Write a function to set the 3rd bit of an integer using bitwise OR.*/

#include <iostream>
using namespace std;

int set(int n){
    return n | (1<<2);
}
int main(){
    int num=5;
    int n=set(num);
    cout<<n;
}