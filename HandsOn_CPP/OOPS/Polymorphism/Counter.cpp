/*4.	Create Counter supporting both ++c and c++.
 Return references/temporaries properly.
  Demonstrate differences in expression 
  contexts (e.g., int x = c++ vs. int y = ++c).*/

#include <iostream>
using namespace std;

class Counter{
    private:
        int count=0;
    public:
        Counter& operator++(){
            count++;
            return *this;
        }
        Counter operator++(int){
            Counter temp=*this;
            count++;
            return temp;
        } 
        void display(){
            cout<<"count: "<<count<<endl;
        }     
};
int main(){
    Counter c;
    ++c;
    c++;
    c.display();
}

