#include <iostream>
#include <regex>
using namespace std;

int main(){
    string str="abcd";
    regex pattern("[abc]");
    if(regex_match(str,pattern))
        cout<<"match";
    else 
        cout<<"no match";
}