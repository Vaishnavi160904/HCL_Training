/*6.Create multiple objects in nested scopes and 
throw an exception. Track destruction order.*/

#include <iostream>
using namespace std;

class destruction{
    public:
        string txt;
        destruction(string t){
            txt=t;
            cout<<"Constructor: "<<txt<<endl;
        }
        ~destruction(){
            cout<<"Destructor: "<<txt<<endl;
        }
};
int main(){
    try{
        destruction d1("obj 1");
        {
            destruction d2("obj 2");
            destruction d3("obj 3");
            cout << "throwing exception" << endl;
            throw 10;
        }
    }catch(int e){
        cout<<"Exception: "<<e<<endl;
    }
}