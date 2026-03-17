/*1.Validate if a string contains only digits using a regex pattern.*/

#include <iostream>
#include <regex>
using namespace std;

int main(){
    string str="254323 ";
    regex pattern("^[0-9]+$");

    if(regex_match(str,pattern))
        cout<<"contains Only digits: "<<str<<endl;
    else    
        cout<<"contains non digits: "<<str<<endl;
}