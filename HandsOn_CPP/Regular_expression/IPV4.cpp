/*3.Implement a regex to check if a string is a valid IPv4 address.*/
#include <iostream>
#include <regex>
using namespace std;

int main(){
    string ipv4;
    cout<<"Enter ipv4: "<<endl;
    cin>>ipv4;

    regex pattern(R"(^(25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)\.(25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)\.(25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)\.(25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)$)");

    if (regex_match(ipv4,pattern))
        cout<<"Valid: "<<ipv4<<endl;
    else    
        cout<<"Invalid"<<endl;
}