/**/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    try{
    ifstream file1("data.txt");
    ofstream file2("data_copy.txt");
    bool has_data=false;
    string text;

    if(!file1 && !file2)
        throw "can't open the files";
    
    while(getline(file1,text)){
        has_data=true;
        file2<<text<<endl;
    }

    if(has_data){
        cout<<"Data copied from file1 to file2\n";
    }else{
        cout<<"file1 is empty\n";
    }

    file1.close();
    file2.close();

    char ch1,ch2;
    bool copy=true;
    ifstream f1("data.txt");
    ifstream f2("data_copy.txt");

    while(true){
        f1.get(ch1);
        f2.get(ch2);

        if(file1.eof() || file2.eof())
            break;
        
        if(ch1!=ch2){
            copy=false;
            break;
        }
    }
    if (copy)
        cout << "Verification Successful: Both files are same\n";
    else
        cout << "Verification Failed: Files are different\n";
    
    f1.close();
    f2.close();
    
    }catch(const char* msg){
        cout<<msg<<endl;
    }
}