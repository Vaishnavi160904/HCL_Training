/*3.Implement a function that throws a 
std::string when a file cannot be opened.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file;
    file.open("data.txt");

    try{
        if(!file){
            throw string("file can't be opened");
        }
        cout<<"file opened successfully";
        file.close();
    }catch(string s){
        cout<<"Error: "<<s<<endl;
    }
}