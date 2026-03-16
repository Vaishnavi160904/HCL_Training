/*3.Print __VERSION__ (GCC/Clang) or 
equivalent to display compiler version at runtime.
 Combine with __FILE__ and __LINE__ in assertions.*/

 #include <iostream>
 using namespace std;

 #define assert(con) \
 if(!(con)){\
    cout<<"Assertion failed\n";\
    cout<<"File: "<<__FILE__<<endl;\
    cout<<"Line: "<<__LINE__<<endl;\
    exit(1);\
 } 

 int main(){
    cout<<"Compiler Version: "<<__VERSION__<<endl;
    assert (5>8);
 }