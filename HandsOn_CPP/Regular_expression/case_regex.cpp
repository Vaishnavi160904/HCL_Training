/*2.	Write a regex that matches "apple" regardless of case (e.g., Apple, APPLE).*/

#include <iostream>
#include <regex>
using namespace std;

int main(){
    string str;
    cout<<"Enter str: "<<endl;
    cin>>str;

    regex pattern("apple",regex_constants::icase);

    if(regex_match(str,pattern))
        cout<<"Match: "<<str<<endl;
    else
        cout<<"No match"<<endl;
}
