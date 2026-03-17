/*4.Convert lowercase letters to uppercase using bitwise operations.*/

#include <iostream>
using namespace std;

char to_upper(char c){
    if (c>='a' && c<='z'){
        c= c & ~(1<<5);
    }
    return c;
}
int main(){
    char ch;
    cout<<"Enter: "<<endl;
    cin>>ch;

    char upper_ch=to_upper(ch);
    cout<<"Upper: "<<upper_ch<<endl;
}