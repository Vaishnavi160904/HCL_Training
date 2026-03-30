#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string text = "Call me at 9876543210 or +91 987-654-3210 or (987) 654-3210.";

    regex pattern("(\\+?\\d{1,3}[-.\\s]?)?(\\(?\\d{3}\\)?[-.\\s]?)\\d{3}[-.\\s]?\\d{4}");

    auto s=sregex_iterator(text.begin(),text.end(),pattern);
    auto e=sregex_iterator();

    for (auto i=s;i!=e;++i){
        cout<<"Found: "<<i->str()<<endl;
    }

    return 0;
}