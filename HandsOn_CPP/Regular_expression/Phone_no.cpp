/*6.Convert phone numbers from 1234567890 
to (123) 456-7890 using regex replace.*/

#include <iostream>
#include <regex>
using namespace std;

int main(){
    string number;
    cout<<"enter no: "<<endl;
    cin>>number;

    regex pattern("(\\d{3})(\\d{3})(\\d{4})");

    string match=regex_replace(number,pattern,"($1) $2-$3");
    cout<<match<<endl;
}