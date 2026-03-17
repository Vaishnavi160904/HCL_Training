/*4.	Create a regex to check if a string is a valid HTTP or HTTPS URL.*/
#include <iostream>
#include <regex>
using namespace std;

int main(){
    string url;
    cout<<"Enter url: "<<endl;
    cin>>url;

    regex pattern(R"(^(https?:\/\/)([a-zA-Z0-9-]+\.)+[a-zA-Z]{2,}(\/\S*)?$)");
    if(regex_match(url,pattern))
        cout<<"Valid url: "<<url<<endl;
    else
        cout<<"Invalid url"<<endl;
}