/*3. Create strong types for Meters, Seconds, and MetersPerSecond. 
Implement operator overloading so that dividing Meters by Seconds
yields MetersPerSecond. Ensure type safety by omitting overloads
that would allow incompatible unit operations.*/

#include <iostream>
using namespace std;

class Meters{
    public:
        double distance;
        Meters (double d){
            this->distance = d;
        }
};
class Seconds{
    public:
        double time;
        Seconds(double t){
            this->time =t;
        }
};

class MetersPerSecond{
    public:
        double speed;

        MetersPerSecond(double s){
            speed=s;
        }
        void display(){
            cout<<"Speed: "<<speed<<" m/s"<<endl;
        }
};
MetersPerSecond operator/(Meters m,Seconds s){
    return MetersPerSecond(m.distance/s.time);
}

int main(){
    Meters m(200);
    Seconds s(20);

    MetersPerSecond speed=m/s;
    speed.display();
}

