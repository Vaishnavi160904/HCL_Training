#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"ceil(4.2): "<<ceil(4.2)<<endl;
    cout<<"floor(4.8): "<<floor(4.8)<<endl;
    cout<<"round(4.2): "<<round(4.2)<<endl;
    cout << "round(4.5 and above): " << round(4.5) << endl;
    cout<<"trunc(4.1 to 4.9): "<<trunc(4.1)<<endl;

    cout <<"abs(-10): "<<abs(-10.7)<<endl;

    cout<<"min(12,3): "<<fmin(12,3)<<endl;
    cout<<"max(12,3): "<<fmax(12,3)<<endl;
}