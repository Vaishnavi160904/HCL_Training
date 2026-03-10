#include <iostream>
using namespace std;

struct point
{
    int roll;
    string name;
};

struct inner
{
    int a,b;
};
struct outer
{
    inner in;
    int x,y;
};
struct count{
    int c;
    void show_count(){
        cout<<c<<endl;
    }
};

struct Node{
    int data;
    Node *next;
};

struct  DLL{
    int data;
    DLL *prev;
    DLL *next;
};

int main(){
    point p1={1,"vaish"};
    point p2={2,"harini"};

    cout<<p1.name<<" "<<p1.roll<<endl;
    cout << p2.name << " " << p2.roll<<endl;

    //sizeof 
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p1.name)<<endl;

    //inner__outer
    outer o={{1,2},3,4};
    cout<<o.in.a<<endl;
    cout<<o.x<<endl;

    //pointer to structure
    count c={12};
    count *ptr=&c;
    ptr->show_count();

    //self referential structure
    Node n1,n2;
    n1.data=10;
    n2.data=20;
    
    n1.next=&n2;
    n2.next=NULL;

    cout<<"NODE n1: "<<n1.data<<endl;
    cout<<"NODE n2: "<<n1.next->data<<endl;
    cout << "NODE n3: " << n1.next->next<< endl;


    //DLL
    DLL d1,d2,d3;

    d1.data=100,d1.prev=NULL,d1.next=&d2;
    d2.data=200,d2.prev=&d1,d2.next=&d3;
    d3.data=300,d3.prev=&d2,d3.next=NULL;

    cout<<d2.prev->data <<"->"<<d2.data<<"->"<<d2.next->data<<endl;

}


