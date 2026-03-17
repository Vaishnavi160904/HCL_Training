/*3.	Implement a function to toggle the 4th bit of an integer using XOR.*/

#include <iostream>
using namespace std;

int toggle(int n){
    return n^(1<<3);
}
int main(){
    int num=10;
    int value=toggle(num);
    cout<<value<<endl;
}