/*5.	Allocate a single object using 
new and delete it using delete.
Demonstrate constructor and destructor calls.*/

#include <iostream>
using namespace std;
class Demo{
    private:
        int value;
    public:
        Demo(int v){
            value=v;
        }
        void display(){
            cout<<"Value: "<<value<<endl;
        }
        ~Demo(){
            cout<<"Demo destroyed"<<endl;
        }
};
int main(){
    Demo *t;
    t=new Demo(6);
    t->display();
    delete t;
}