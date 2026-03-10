#include <iostream>
#include <vector>
using namespace std;


int main(){
    //basic data types
    typedef int n;
    n num1=10;
    n num2=30;

    //arrays
    typedef int array[5];
    array arr1={1,2,3,4,5};
    array arr2={3,4,2,3,2};

    //STL (vector,map)
    typedef vector<int> v;
    v vector1={1,2,3,4};

    for (int temp:vector1){
        cout<<temp<<" ";
    }
    cout<<endl;


    //Pointers
    typedef int* ptr;
    int a=199;
    ptr p1=&a;

    cout<<*p1<<endl;

}