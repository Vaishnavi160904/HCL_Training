/*2.	Write a program that throws an exception 
when a negative number is entered and
 catches it to display an error message.*/

 #include <iostream>
 using namespace std;
 int main(){
    int a;
    try{
        cin>>a;
        if (a<0){
            throw "Negative no";
        }
        cout<<"Number positive"<<endl;
    }catch(const char* msg){
        cout<<"Error: "<<msg<<endl;
    }
 }