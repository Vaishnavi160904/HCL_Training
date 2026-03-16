/*4.	Create a base class Shape with a virtual destructor
 and derived class Circle. Use dynamic_cast to downcast safely.*/

 #include <iostream>
 using namespace std;

 class Shape{
    public:
        virtual ~Shape(){
            cout<<"Destructor";
        }
 };
 class Circle :public Shape{
    public:
        void display(){
            cout<<"Shape"<<endl;
        }
 };
 int main(){
    Shape* s=new Circle();
    Circle* d=dynamic_cast<Circle*> (s);

    if (d){
        d->display();
    }else{
        cout<<"cast fail"<<endl;
    }

    delete s;
    
 }