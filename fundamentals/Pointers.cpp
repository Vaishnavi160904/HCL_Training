#include <iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int b=99;
    ptr=&b;
    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;

    //NULL pointer
    int* p2=nullptr;
    cout<<"p2 address "<<p2<<endl;

    //void pointer
    int x=10;
    void* p3=&x;
    cout<<"void pointer Value "<<*(static_cast<int*>(p3))<<endl;

    //pointer Arithmetic
    int y[3]={10,20,30};
    int* p4=y;
    cout<<"address of p4: "<<p4<<" value of p4: "<<*p4<<endl;
    p4++;
    cout << "address of p4: " << p4 << " value of p4: " << *p4<<endl;
    p4++;
    cout << "address of p4: " << p4 << " value of p4: " << *p4<<endl;

    

}