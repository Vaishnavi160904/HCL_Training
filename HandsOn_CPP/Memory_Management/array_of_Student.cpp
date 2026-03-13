/*4.Allocate an array of Student objects dynamically.
 Initialize and display their details.*/

 #include<iostream>
 using namespace std;
 class Student{
    private:
        string name;
        string dept;
    public:
        void setvalues(string n,string d){
            name=n;
            dept=d;
        }
        void display(){
            cout<<"Name: "<<name<<" "<<"Dept: "<<dept<<endl;
        }
 };
 int main(){
    Student *arr;
    int n;
    cout<<"Enter no stutents: "<<endl;
    cin>>n;
    arr=new Student[n];
    string na,d;
    for (int i=0;i<n;i++){
        cout<<"Enter student name and dept"<<endl;
        cin>>na>>d;

        arr[i].setvalues(na,d);
    }
    for (int i=0;i<n;i++){
        cout<<"Student "<<i+1<<": "<<endl;
        arr[i].display();
    }

    delete[] arr;
 }