/*4.	A CryptoBox class stores private key material. 
Define a friend function dumpForAudit(const CryptoBox&)
 that may inspect private fields for compliance reporting. 
 Prove that regular functions cannot access those fields.*/
#include <iostream>
using namespace std;
 class CryptoBox{
    private:
        string privatekey;
    
    public:
        CryptoBox(string key){
            privatekey=key;
        }
        friend void dumpForAudit(const CryptoBox &c);

 };
 void dumpForAudit(const CryptoBox &c){
    cout<<"Private Key: "<<c.privatekey<<endl;
 }
 void regular_function(const CryptoBox &c){
    //cout<<"Private Key: "<<c.privatekey<<endl;
    cout << "member CryptoBox::privatekey (declared at line 9) is inaccessible"<<endl;
 }

 int main(){
    CryptoBox c("Ajhfkj223sdsAA");
    dumpForAudit(c);

    regular_function(c);
 }