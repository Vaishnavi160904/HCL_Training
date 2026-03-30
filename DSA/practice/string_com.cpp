#include <iostream>
using namespace std;

int main(){
    string str="aaaaaahgfbb";
    int count=1;
    int n=str.length();

    for (int i=0;i<n;i++){
        char c=str[i];
        if (c==str[i+1]){
            count++;
        }else{
            cout<<c<<count;
            count=1;
        }
    }

}