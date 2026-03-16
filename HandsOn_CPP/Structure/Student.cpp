/*4.	Write multiple struct Student records to a file and read them back.*/

#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    int rollno;
    char name[50];
};

int main(){
    Student s={12,"sam"};
    
    ofstream f1("student.dat",ios::binary);
    f1.write((char*)&s,sizeof(s));
    f1.close();

    Student s1;
    ifstream f2("student.dat",ios::binary);
    f2.read((char*)&s1,sizeof(s1));

    cout<<"Roll no: "<<s1.rollno<<endl;
    cout<<"Name: "<<s1.name<<endl;
}