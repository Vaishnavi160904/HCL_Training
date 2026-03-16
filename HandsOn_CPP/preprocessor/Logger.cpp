/*2.	Implement a logger that prints __FILE__, __LINE__, and __func__. 
Trigger logs from different functions 
and verify locations match source.*/

#include <iostream>
using namespace std;

#define LOG(msg) cout<<msg<<"  | File: "<<__FILE__ <<" | Line: "<<__LINE__ <<" | Function: "<<__func__<<endl;

void f1(){
    LOG("f1");
}
void f2(){
    LOG("f2");
}

int main(){
    LOG("Main");
    f1();
    f2();
}