/*1.	Create an array of pointers to strings 
and print them using pointer dereferencing.*/

#include <iostream>
using namespace std;
int main(){
    string s1="hello";
    string s2="hi";

    string *arr[2]={&s1,&s2};

    for (int i=0;i<2;i++){
        cout<<*arr[i]<<" ";
    }
    
}