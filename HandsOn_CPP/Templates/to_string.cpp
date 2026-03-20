/*1.	Template to_string(T) that formats values; 
provide explicit specialization for std::string to add quotes.
 Show calls for int, double, and std::string yielding different formatting.*/
 #include <iostream>
 #include <sstream>
 using namespace std;

 template <typename T>
 string to_string(T s){
    ostringstream oss;
    oss<<s;
    return oss.str();
 }

 template <>
 string to_string<string>(string s){
    return "\""+s+"\"";
 }

 int main(){
    int i=20;
    double d=23.23;
    string s="io";
    cout<<to_string(i)<<endl;
    cout<<to_string(d)<<endl;
    cout<<to_string(s)<<endl;
 }