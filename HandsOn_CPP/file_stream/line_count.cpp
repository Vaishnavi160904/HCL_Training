/*2.	Count the number of lines in a file and 
append “Total Lines: X” at the end using fstream.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream out;
    out.open("data.txt",ios::in);
    string line;
    int count=0;

    while(getline(out,line)){
        count++;
    }
    cout<<"count successful"<<endl;
    out.close();

    ofstream in;
    in.open("data.txt",ios::app);

    in<<"Total Lines: "<<count<<"\n";
    cout<<"total line added to a file"<<endl;

    in.close();

}