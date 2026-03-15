/*1.Simulate a program that reads from a file 
and divides numbers. Show how exceptions can
 handle both file errors and division errors
  uniformly.*/

  #include <iostream>
  #include <fstream>
  using namespace std;

  int main(){
    try{
        int a,b;
        ifstream file;
        file.open("data.txt");
        if(!file){
            throw "file can't open";
        }else{
            while (file>>a>>b){
                if (b == 0)
                    throw "Divide by 0";
                cout<<a/b<<endl;
            }
        }
        file.close();
    }catch(const char* msg){
        cout<<msg<<endl;
    }
  }

