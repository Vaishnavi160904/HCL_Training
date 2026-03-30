/*Invoice number validation with checksum stub - Invoices 
follow INV-<year><month>-<serial> e.g., INV-202511-000123; 
year is 4 digits, month 01–12, serial exactly 6 digits.*/
#include <iostream>
#include <regex>
using namespace std;

int main(){
    string invoice = "INV-202510-000123";

    regex pattern("INV-(\\d{4})(0[1-9]|1[0-2])-(\\d{6})");

    if(regex_match(invoice,pattern)){
        cout<<"Valid: "<<invoice<<endl;
    }else{
        cout<<"Invalid"<<endl;
    }
 }
