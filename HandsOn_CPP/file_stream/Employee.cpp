/*3.Create a class Employee and 
write its objects to a binary file.
 Read them back and display details.*/

 #include <iostream>
 #include <fstream>
 using namespace std;

 class Employee{
    public:
        char name[20];
        double salary;
    
        void input(){
            cout<<"Enter name: "<<endl;
            cin>>name;
            cout<<"Enter salary: "<<endl;
            cin>>salary;
        }
        void display(){
            cout<<"Name: "<<name<<" salary: "<<salary<<endl;
        }
 };
 void addEmp(){
    Employee e;
    e.input();
    ofstream f1;
    f1.open("emp.dat",ios::binary | ios::app);
    f1.write((char*)&e,sizeof(e));
    f1.close();
 }
 void display(){
    Employee e;
    ifstream f2;
    f2.open("emp.dat",ios::binary);

    while(f2.read((char*)&e,sizeof(e))){
        e.display();
    }
    f2.close();

 }
 int main(){
    
    int choice;
    while (true){
        cout<<"\n1 : addemp\n";
        cout<<"2 : display\n";
        cout<<"3 : exit\n";
        cout<<"Enter choice: "<<endl;
        cin>>choice;

        switch (choice){
            case 1: addEmp(); break;
            case 2: display(); break;
            case 3: cout<<"exit "<<endl; return 0;
            default:
                cout<<"Invalid choice"<<endl;
            }
    }
 }