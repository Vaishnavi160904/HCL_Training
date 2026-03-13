/*1.	Implement a program that attempts to open a file 
and checks if the file opened successfully using .is_open(). 
writing data, and explicitly closing it using .close(). 
Verify by reopening and reading the content.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
     ofstream file;
     file.open("data.txt");
     string text="Hello welcome";
     
     if(file.is_open()){
        cout<<"file opened successfully"<<endl;
        file<<text;
        cout<<"write success"<<endl;
     }else{
        cout<<"can't open the file"<<endl;
     }
     file.close();

     ifstream f;
     f.open("data.txt");
     string txt;
     while (getline(f,txt)){
        cout<<txt<<endl;
     }
     f.close();
     


     

}