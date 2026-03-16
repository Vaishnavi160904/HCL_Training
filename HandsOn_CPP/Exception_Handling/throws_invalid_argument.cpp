/*4.Implement a function that throws std::invalid_argument 
when a non-numeric string is converted to an integer.*/

#include <iostream>
#include <string>
using namespace std;
int covert(string str){
    for(char c:str){
        if (!isdigit(c)){
            throw invalid_argument("string value");
        }
    }
    return stoi(str);
}
int main(){
    string s="123a";
    try{
        int num=covert(s);
        cout<<"String to int: "<<num<<endl;
    }catch(const invalid_argument &e){
        cout<<"Error: "<<e.what()<<endl;
    }
}