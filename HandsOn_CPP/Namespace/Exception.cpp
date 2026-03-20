/*4.	Define a custom exception class inside a namespace
 and throw/catch it in main().*/

 #include <iostream>
 using namespace std;

 namespace exception{
    class Exception{
        public:
            void msg(){
                cout<<"Exception"<<endl;
            }
    };
 }
 int main(){
    
    try{
        throw exception::Exception();
    }catch(exception::Exception e){
        e.msg();
    }
    return 0;
 }